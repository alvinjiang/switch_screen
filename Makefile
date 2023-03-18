CC=gcc
CFLAGS=-I.

switch_screen:
	gcc switch_screen.c -o switch_screen
	sudo chown root:root switch_screen
	sudo chmod 7445 switch_screen

switch_screen_1:
	gcc switch_screen_1.c -o switch_screen_1
	sudo chown root:root switch_screen_1
	sudo chmod 7445 switch_screen_1

switch_screen_2:
	gcc switch_screen_2.c -o switch_screen_2
	sudo chown root:root switch_screen_2
	sudo chmod 7445 switch_screen_2

switch_screen_3:
	gcc switch_screen_3.c -o switch_screen_3
	sudo chown root:root switch_screen_3
	sudo chmod 7445 switch_screen_3

switch_screen_4:
	gcc switch_screen_4.c -o switch_screen_4
	sudo chown root:root switch_screen_4
	sudo chmod 7445 switch_screen_4

switch_screen_5:
	gcc switch_screen_5.c -o switch_screen_5
	sudo chown root:root switch_screen_5
	sudo chmod 7445 switch_screen_5

