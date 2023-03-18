// switch_screen_1.c
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
    
int main()
{
    setuid(0);
    system("ddcutil setvcp 60 0x11"); // Change this for each computer
    return 0;
}

