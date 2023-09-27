#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

map<string, int> sym;
map<string, string> op_tab = {
    {"ADD", "18"},
    {"AND", "40"},
    {"COMP", "28"},
    {"DIV", "24"},
    {"J", "3C"},
    {"JEQ", "30"},
    {"JGT", "34"},
    {"JLT", "38"},
    {"JSUB", "48"},
    {"LDA", "00"},
    {"LDCH", "50"},
    {"LDL", "08"},
    {"LDX", "04"},
    {"MUL", "20"},
    {"OR", "44"},
    {"RD", "D8"},
    {"RSUB", "4C"},
    {"STA", "0C"},
    {"STCH", "54"},
    {"STL", "14"},
    {"STX", "10"},
    {"SUB", "1C"},
    {"TD", "E0"},
    {"TIX", "2C"},
    {"WD", "DC"}};
int program_length;
void PASS1()
{
    ifstream program;
    ofstream intermediate;
    string instruction, space_delimiter = " ", instr[3];
    vector<string> sym_exist;
    sym_exist.clear();
    int pos = 0, parameter = 0, locctr = 0X0, start = 0X0, count = 0X0;
    program.open("SIC_lab.txt", ios::in);
    intermediate.open("intermediate.txt", ios::out);
    if (!program.is_open())
    {
        cout << "File is missing." << endl;
        return;
    }
    getline(program, instruction);
    while ((pos = instruction.find(space_delimiter)) != string::npos)
    {
        instr[parameter] = instruction.substr(0, pos);
        instruction.erase(0, pos + space_delimiter.length());
        parameter++;
    }
    instr[parameter] = instruction.c_str();
    parameter = 0;
    if (instr[1] == "START")
    {
        locctr = stoi(instr[2]);
        while (locctr > 0)
        {
            start = start + (locctr % 10) * pow(16, count);
            locctr = locctr / 10;
            count++;
        }
        locctr = start;
        intermediate << hex << uppercase << start << " " << instr[0] << " " << instr[1] << " " << instr[2];
    }
    else
        locctr = 0X0;
    while (getline(program, instruction))
    {
        if (instruction[0] == ';' || instruction[0] == '.')
            continue;
        while ((pos = instruction.find(space_delimiter)) != string::npos)
        {
            instr[parameter] = instruction.substr(0, pos);
            instruction.erase(0, pos + space_delimiter.length());
            parameter++;
        }
        instr[parameter] = instruction.c_str();
        if (instr[0] == "END")
            break;
        if (instr[0][0] != ';' && instr[0][0] != '.') // not comment
        {
            if (parameter == 0)
            {
                instr[1] = instr[0];
                intermediate << endl
                             << hex << uppercase << setw(4) << setfill('0') << locctr << " " << instr[1];
            }
            if (parameter == 1)
            {
                instr[2] = instr[1];
                instr[1] = instr[0];
                intermediate << endl
                             << hex << uppercase << setw(4) << setfill('0') << locctr << " " << instr[1] << " " << instr[2];
            }
            if (parameter == 2)
            {
                vector<string>::iterator it = find(sym_exist.begin(), sym_exist.end(), instr[0]);
                if (it != sym_exist.end())
                {
                    cout << "Duplicate label found: " << instr[0] << endl;
                    return;
                }
                else
                {
                    sym_exist.push_back(instr[0]);
                    sym.insert(pair<string, int>(instr[0], locctr));
                    intermediate << endl
                                 << hex << uppercase << locctr << " " << instr[0] << " " << instr[1] << " " << instr[2];
                }
            }
            map<string, string>::iterator it = op_tab.find(instr[1]);
            if (!(it == op_tab.end()))
                locctr += 3;
            else if (instr[1] == "WORD" || instr[1] == "word")
                locctr += 3;
            else if (instr[1] == "RESW" || instr[1] == "resw")
                locctr += 3 * stoi(instr[2]);
            else if (instr[1] == "RESB" || instr[1] == "resb")
                locctr += stoi(instr[2]);
            else if (instr[1] == "BYTE" || instr[1] == "byte")
            {
                int len = instr[2].length();
                if (instr[2][0] != 'C' && instr[2][0] != 'X')
                    locctr += 1;
                else if (instr[1] == "BYTE" && instr[2][0] == 'C')
                    locctr += (len - 3);
                else if (instr[1] == "BYTE" && instr[2][0] == 'X')
                {
                    if ((len - 3) % 2 != 0)
                        locctr += (len - 3) / 2 + 1;
                    else
                        locctr += (len - 3) / 2;
                }
            }
            else
            {
                cout << "Cannot find " << instr[1] << " in OPTAB" << endl
                     << "Exiting ..." << endl;
                return;
            }
        }
        parameter = 0;
    }
    cout << "Intermediate file are generated" << endl;
    program_length = locctr - start;
    program.close();
    intermediate.close();
    return;
}
void PASS2()
{
    ifstream intermediate;
    ofstream result;
    stringstream tmp;
    int locctr = 0X0, start = 0X0, pos = 0, parameter = 0, count = 0X0, recorded_length = 0X0, addr = 0X0, label_addr = 0X0, label_target = 0X0;
    long int count_begin, count_end;
    string instr[4], instruction, OP_code, space_delimiter = " ", last_instr;
    intermediate.open("intermediate.txt", ios::in);
    result.open("result.txt", ios::out | ios::trunc);
    if (!intermediate.is_open())
    {
        cout << "Intermediate file is missing." << endl;
        return;
    }
    intermediate >> instr[0] >> instr[1] >> instr[2] >> instr[3]; // loc, label, mn, op
    tmp << hex << uppercase << instr[0];
    tmp >> locctr;
    tmp.clear();
    if (instr[2] == "START")
    {
        tmp << hex << uppercase << instr[3];
        tmp >> start;
        result << "H^" << left << setw(6) << setfill(' ') << instr[1]
               << "^" << right << hex << uppercase << setw(6) << setfill('0') << start
               << "^" << right << hex << uppercase << setw(6) << setfill('0') << program_length;
        result << endl
               << "T^" << hex << uppercase << setw(6) << setfill('0') << start << "^00";
        count_begin = result.tellp();
    }
    getline(intermediate, instruction);
    while (getline(intermediate, instruction))
    {
        parameter = 0;
        while ((pos = instruction.find(space_delimiter)) != string::npos)
        {
            instr[parameter] = instruction.substr(0, pos);
            instruction.erase(0, pos + space_delimiter.length());
            parameter++;
        }
        instr[parameter] = instruction.c_str();
        tmp << instr[0];
        tmp >> locctr;
        tmp.clear();
        if (parameter == 1)
            instr[2] = instr[1];
        else if (parameter == 2)
        {
            instr[3] = instr[2];
            instr[2] = instr[1];
        }
        if (count >= 0X37 || ((last_instr == "RESB" || last_instr == "RESW") && (instr[2] != "RESW" && instr[2] != "RESB")) || instr[2] == "END")
        {
            count_end = result.tellp();
            result.seekp(-(count_end - count_begin) - 3L, ios::cur);
            recorded_length = count / 0X2;
            result << "^" << hex << uppercase << setw(2) << setfill('0') << recorded_length;
            result.seekp(0L, ios::end);
            if (instr[2] == "END")
                break;
            addr = locctr;
            if (instr[2] != "RESW")
                result << endl
                       << "T^" << hex << uppercase << setw(6) << setfill('0') << addr << "^00";
            count_begin = result.tellp();
            count = 0X0;
        }
        map<string, string>::iterator it = op_tab.find(instr[2]);
        string opcode, value_of_X = "";
        if (it != op_tab.end())
        {
            opcode = op_tab[instr[2]];
            int k = instr[3].length();
            if (instr[3][k - 1] == 'X' && instr[3][k - 2] == ',')
            {
                instr[3] = instr[3].substr(0, k - 2);
                map<string, int>::iterator itt = sym.find(instr[3]);
                if (itt != sym.end())
                {
                    label_addr = sym[instr[3]];
                    label_target = label_addr + 0X8000;
                }
                result << "^" << setw(2) << opcode << hex << uppercase << setw(4) << setfill('0') << label_target;
                count = count + 0X6;
                if (intermediate.peek() == EOF)
                {
                    count_end = result.tellp();
                    result.seekp(-(count_end - count_begin) - 3L, ios::cur);
                    recorded_length = count / 0X2;
                    result << "^" << hex << uppercase << setw(2) << setfill('0') << recorded_length;
                    result.seekp(0L, ios::end);
                }
                continue;
            }
            else if (instr[2] != "RSUB")
            {
                map<string, int>::iterator itt = sym.find(instr[3]);
                if (itt != sym.end())
                {
                    label_addr = sym[instr[3]];
                    label_target = label_addr;
                }
                cout << "opcode: " << opcode << " target address: " << hex << uppercase << label_target << endl;
                result << "^" << setw(2) << opcode << hex << uppercase << setw(4) << setfill('0') << label_target;
                count = count + 0X6;
                last_instr = instr[2];
                if (intermediate.peek() == EOF)
                {
                    count_end = result.tellp();
                    result.seekp(-(count_end - count_begin) - 3L, ios::cur);
                    recorded_length = count / 0X2;
                    result << "^" << hex << uppercase << setw(2) << setfill('0') << recorded_length;
                    result.seekp(0L, ios::end);
                }
                continue;
            }
            else if (instr[2] == "RSUB")
            {
                result << "^" << opcode << "0000";
                count = count + 0X6;
                last_instr = instr[2];
                if (intermediate.peek() == EOF)
                {
                    count_end = result.tellp();
                    result.seekp(-(count_end - count_begin) - 3L, ios::cur);
                    recorded_length = count / 0X2;
                    result << "^" << hex << uppercase << setw(2) << setfill('0') << recorded_length;
                    result.seekp(0L, ios::end);
                }
                continue;
            }
        }
        else
        {
            if (instr[2] == "BYTE" || instr[2] == "byte")
            {
                if (instr[3][0] == 'C')
                {
                    int temp = 0X0, ascii = 0X0;
                    for (int j = 0; j < instr[3].length() - 3; j++)
                    {
                        temp = 0X0;
                        temp = temp + (int)instr[3][j + 2];
                        ascii = ascii * 0X100 + temp;
                    }
                    result << "^" << setw(6) << ascii;
                    count = count + 2 * (instr[3].length() - 0X3);
                }
                else if (instr[3][0] == 'X')
                {
                    for (int j = 0; j < instr[3].length() - 3; j++)
                    {
                        value_of_X = value_of_X + instr[3][j + 2];
                    }
                    result << "^" << value_of_X;
                    count = count + value_of_X.length();
                }
                last_instr = instr[2];
                if (intermediate.peek() == EOF)
                {
                    count_end = result.tellp();
                    result.seekp(-(count_end - count_begin) - 3L, ios::cur);
                    recorded_length = count / 0X2;
                    result << "^" << hex << uppercase << setw(2) << setfill('0') << recorded_length;
                    result.seekp(0L, ios::end);
                }
                continue;
            }
            else if (instr[2] == "WORD" || instr[2] == "word")
            {
                int temp = stoi(instr[3]);
                result << "^" << hex << uppercase << setw(6) << setfill('0') << temp;
                count = count + 0X6;
                last_instr = instr[2];
                if (intermediate.peek() == EOF)
                {
                    count_end = result.tellp();
                    result.seekp(-(count_end - count_begin) - 3L, ios::cur);
                    recorded_length = count / 0X2;
                    result << "^" << hex << uppercase << setw(2) << setfill('0') << recorded_length;
                    result.seekp(0L, ios::end);
                }
                continue;
            }
            else
            {
                last_instr = instr[2];
                if (intermediate.peek() == EOF)
                {
                    count_end = result.tellp();
                    result.seekp(-(count_end - count_begin) - 3L, ios::cur);
                    recorded_length = count / 0X2;
                    result << "^" << hex << uppercase << setw(2) << setfill('0') << recorded_length;
                    result.seekp(0L, ios::end);
                }
                continue;
            }
        }
    }
    result << endl
           << "E^" << hex << uppercase << setw(6) << setfill('0') << start;
    cout << "Successful!" << endl;
    intermediate.close();
    result.close();
    return;
}

int main()
{
    PASS1();
    PASS2();
    return 0;
}