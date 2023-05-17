#include <stdio.h>
#include "tools.h"

int main(void) {

	while (1) {
		DisplayMainMenu();
		char userOption = ChooseFromMainMenu();

		system("cls");
		switch (userOption) {
			case '1': // Employee
					Employee();
					break;

			case '2': // Customer
					Customer();
					break;

			case '3': // Exit
					return 0;	

			default:
					printf("Invalid Option");
			
		}

		system("cls");
	}
}
