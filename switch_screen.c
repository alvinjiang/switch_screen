// switch_screen_1.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
    
int main(int argc, char *argv[])
{

	if (argc == 2) {
		char inp[5];
		char command[50] = "ddcutil setvcp -b 6 60 ";
		switch (*argv[1]) {
			default:
				printf("Wrong args\n");
				return 1;
				break;
			case '1':
				strcpy(inp, "0x11");
				break;
			case '2':
				strcpy(inp, "0x12");
				break;
			case '3':
				strcpy(inp, "0x0f");
				break;
			case '4':
				strcpy(inp, "0x13");
				break;
			case '5':	
				strcpy(inp, "0x1b");
				break;
		}
		strcat(command, inp);
		setuid(0);
		system(command); // Change this for each computer
		return 0;
	} else {
		printf("Incorrect args\n");
		return 1;
	}
}

