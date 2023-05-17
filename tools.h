#ifndef TOOLS_H
#define TOOLS_H

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

char* MallocString(char* str);

// Main Menu

void DisplayMainMenu();
char ChooseFromMainMenu();
char ChooseOption(int count);

// Registration and Login

void UserRegistration();
void UserLogin();

// Employee

void Employee();
void AccountManagement();
void TransactionHistory();
void TransferMoney();
void LoanManagement();

// Customers

void Customers();
void ViewAccountDetails();
void AccountBalance();
void Payment();
void ApplyForLoan();

// Exit

void GoToMainMenu();
void ExitApplication();

#endif // TOOLS_H
