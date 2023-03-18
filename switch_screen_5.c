// switch_screen_5.c
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
    
int main()
{
    setuid(0);
    system("ddcutil setvcp 60 0x1b"); // Change this for each computer
    return 0;
}

