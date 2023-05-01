#include "myhdr.h"

DoubleList *readDir()
{
    DoubleList *list = initDoubleList();
    DIR *d;
    struct dirent *dir;
    d = opendir("bin");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            if (strcmp(dir->d_name, ".") == 0 || strcmp(dir->d_name, "..") == 0)
                continue;
            // printf("%s\n", dir->d_name);
            addDoubleListNode(list, dir->d_name);
        }
        closedir(d);
    }
    return list;
}

int is_command(char *command)
{
    DoubleList *list = readDir();
    DoubleListNode *node = list->head;
    while (node != NULL)
    {
        if (strcmp(command, node->name) == 0)
            return 1;
        node = node->next;
    }
    return 0;
}

PipeList getPipe(char *str)
{
    PipeList list;
    char *pipe;
    char *tmp = malloc(strlen(str) + 1);
    list.count = 0;

    sscanf(str, "%s", list.pipeCommands[list.count]);
    if ((pipe = strstr(str, " | ")) == NULL)
        strcpy(list.arg[list.count], str);
    else
        strncpy(list.arg[list.count], str, pipe - str);
    list.count++;
    while ((pipe = strstr(str, " | ")) != NULL)
    {
        if (strstr(pipe + 3, " | ") == NULL)
            strcpy(list.arg[list.count], pipe + 3);
        else
            strncpy(list.arg[list.count], str, pipe - str);
        sscanf(pipe + 3, "%s", list.pipeCommands[list.count]);
        list.count++;
        strcpy(str, pipe + 3);
    }

    for (int i = 0; i < list.count; i++)
    {
        if (!is_command(list.pipeCommands[i]))
        {
            printf("Unknown command: [%s].\n", list.pipeCommands[i]);
            for (int j = i; j < list.count - 1; j++)
            {
                strcpy(list.pipeCommands[j], list.pipeCommands[j + 1]);
            }
            list.count--;
            i--;
        }
        else if ((i != list.count - 1) && (is_command(list.pipeCommands[i]) && !is_command(list.pipeCommands[i + 1])))
        {
            printf("Unknown command: [%s].\n", list.pipeCommands[i + 1]);
            list.count = 0;
            break;
        }
    }
    return list;
}

char **getArgu(char *command)
{
    char *tmp = (char *)malloc(sizeof(char) * strlen(command));
    char **arg = (char **)malloc(sizeof(char *) * BUFFER_SIZE);
    int arg_len = 0, c;
    strcpy(tmp, command);
    char *token = strtok(tmp, " ");
    arg[arg_len] = token;
    arg_len++;
    while (token != NULL)
    {
        token = strtok(NULL, " ");
        if ((token && (strcmp(token, "|") == 0 || sscanf(token, "|%d", &c) == 1)) || !token)
        {
            arg[arg_len] = NULL;
            arg_len++;
            break;
        }
        arg[arg_len] = token;
        arg_len++;
    }
    return arg;
}
