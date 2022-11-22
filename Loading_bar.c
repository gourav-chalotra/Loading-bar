#include <stdio.h>
#include<windows.h>
int main()
{
    char LoadingArr[20];
    int gap = 90;
    printf("\n\n\t\t      Loading...\n\t\t");
    for (int i = 0; i < 19; i++)
    {
        LoadingArr[i] = 220;
        printf("%c", LoadingArr[i]);
        Sleep(gap);
    }
    system("cls");
}