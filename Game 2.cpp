#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void gotoxy(short x, short y) {
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    int x=10,y=20,n;
    char ch;
    gotoxy(x,y);
    printf("M");

    while (1)
	{
        ch = getch();
        gotoxy(x,y);
        printf(" ");
        if (ch=='d')
		{
            if (x<76)
                x++;
            else
                x=1;
        }
		else if(ch=='a')
		{
            if(x>1)
                x--;
            else
                x=76;
        }
		else if(ch=='w'&&y>1)
		{
            y--;
        }
		else if(ch=='s'&&y<24)
		{
            y++;
        }
		else if(ch==' ') // Fire bullet
		{
            n=y-1;
            while (n>1)
			{
                gotoxy(x,n);
                printf("i");
                Sleep(50);
                gotoxy(x,n);
                printf(" ");
                n--;
            }
        }
		else if(ch=='q'||ch == 27)
		{
            break;
        }
        gotoxy(x,y);
        printf("M");
    }
    return 0;
}

