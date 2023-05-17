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

inline char ChooseFromMainMenu() {
	return ChooseOption(3);
}

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

char* EnterUsername() {
	printf("Enter username: ");
	char* username;
	scanf(" %s", username);
	return MallocString(username);
}

void EnterPassword() {
	printf("Enter password: ");
	char password[MAX];
	char character;
	int len = 0;
	do {
		character = getch();
		if (character == BACKSPACE) {
			printf(ERASE);
			password[len] = '\0';
			len--;
		} else if (character == ENTER) {
			printf(ENTER);
			pasword[len] = ENTER;
			len++;	
		} else {
			printf(character);
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
