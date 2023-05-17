#include "tools.h"
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define ENTER "\n"
#define BACKSPACE "\b"
#define ERASE "\b \b"
#define MAX 100

typedef struct {
	char fullName[MAX];
	int age;
	char gender;
	char address;
	char occupation[MAX];
	char nationality[MAX];
	int height;
	int weight;
	int status;
} Employee;

typedef struct {
	Employee employee;
	char username[MAX];
	char password[MAX];
} Account;

// Tools

char* MallocString(char* str) {
	return (char*)malloc(sizeof(char) * (strlen(str) + 1);
}

// Main Menu

void DisplayMainMenu() {
	printf("BANKING MANAGEMENT SYSTEM\n");
	printf("[1] Employee");
	printf("[2] Customer");
	printf("[3] Exit");
}

// since main menu has 3 options pass in 3 as argument
inline char ChooseFromMainMenu() {
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

// Registration and Login

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
void EnterPassword() {
	printf("Enter password: ");
	char password[MAX];
	char character;
	int len = 0;
	do {
		character = getch();
		if (character == BACKSPACE) {
			if (len != 0) {
				printf(ERASE);
				password[len] = '\0';
				len--;
			}
		} else if (character == ENTER) {
			printf(ENTER);
			pasword[len] = ENTER;
			len++;	
		} else {
			printf('*');
			password[len] = character;
			len++;
		}
	} while (character != ENTER && len < MAX);
	return MallocString(password);
}

void UserRegistration() {
	EnterUsername();
	EnterPassword();
}

void UserLogin() {

}

// Employee

void Employee() {
	EmployeeRegistration();

}

void EmployeeRegistration() {
	UserRegistration();
}

void AccountManagement() {

}

void TransactionHistory() {

}

void TransferMoney() {

}

void LoanManagement() {

}

// Customers

void Customer() {

}

void ViewAccountDetails() {

}

void AccountBalance() {

}

void Payment() {

}

void ApplyForLoan() {

}

// Exit

void GoToMainMenu() {

}

void ExitApplication() {

}
