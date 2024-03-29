#include "tools.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

// TOOLS

char* MallocString(char* str) {
	return (char*)malloc(sizeof(char) * (strlen(str) + 1));
}

// MAIN MENU

void DisplayMainMenu() {
	printf("BANKING MANAGEMENT SYSTEM\n");
	printf("[1] Employee\n");
	printf("[2] Customer\n");
	printf("[3] Exit\n");
}

// since main menu has 3 options pass in 3 as argument
char ChooseFromMainMenu() {
	return ChooseOption(3);
}

// the option the user choses must be 1 to `count`
// if the option chosen is not between 1 to `count`
// then it will take another input again until it's
// between 1 to `count`
// and return the option
char ChooseOption(int count) {
	int optionInt;
	char optionChar;
	do {

		optionChar = getch();
		optionInt = optionChar - '0';

	} while (optionInt > count && optionInt < 1);

	return optionChar;
}

// REGISTRATION AND LOGIN

// malloc string to return
// since u cannot return a char array
char* EnterUsername() {
	printf("Enter username: ");
	char username[MAX];
	scanf(" %s", username);
	return MallocString(username);
}


// if user press `backspace` it will erase the previous char unless `len` = 0
// if user press `enter` it will add a `\n` (newline character) to the string and exit loop
// if user press any other keys it will print `*` and add the char to the string
char* EnterPassword() {
	printf("Enter password: ");
	char password[MAX];
	char character;
	int len = 0;
	do {
		character = getch();
		if (character == BACKSPACE) {
			if (len != 0) {
				printf(ERASE); // destructive backspace
				password[len] = '\0';
				len--;
			}
		} else if (character == ENTER) {
			printf(ENTER);
			password[len] = ENTER;
			len++;	
		} else {
			printf('*');
			password[len] = character;
			len++;
		}
	} while (character != ENTER && len < MAX);
	return MallocString(password);
}

// EMPLOYEE

void EmployeeSection() {
	EmployeeRegistration();

}

void EmployeeRegistration() {
	
}

void AccountManagement() {

}

void TransactionHistory() {

}

void TransferMoney() {

}

void LoanManagement() {

}

// CUSTOMERS

void CustomerSection() {

}

void ViewAccountDetails() {

}

void AccountBalance() {

}

void Payment() {

}

void ApplyForLoan() {

}

// EXIT

void GoToMainMenu() {

}

void ExitApplication() {

}
