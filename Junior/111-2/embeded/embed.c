#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
	srand(time(NULL));
    int passcode, tmppass = rand()%10000, code, tmpcode;
    printf("%d\n", tmppass);
    int count = 0, B = 0, p, q;
    char *passCode = "1314", *temp;
    int number[10];
    memset(number, 0, sizeof(number));
    scanf("%d", &tmpcode);
    code = tmpcode;
    passcode = tmppass;
    for (p = 0; p < 4; p++)
    {
        number[passcode%10]++;
        if (code % 10 == passcode % 10)
        {
            count++;
            number[passcode%10]--;
        }
        code = code / 10;
        passcode = passcode / 10;
    }
    code = tmpcode;
    passcode = tmppass;
    for (p = 0; p < 4; p++)
    {
        if (number[code%10])
        {
            B++;
            number[code%10]--;
        }
        code = code / 10;
        passcode = passcode / 10;
    }
    printf("count = %d B = %d\n", count, B);
    return 0;
}
