// switch_screen_3.c
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
    
int main()
{
    setuid(0);
    system("ddcutil setvcp 60 0x0f"); // Change this for each computer
    return 0;
}

