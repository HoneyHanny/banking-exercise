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

// TOOLS

char* MallocString(char* str);

// MAIN MENU

void DisplayMainMenu();
char ChooseFromMainMenu();
char ChooseOption(int count);

// REGISTRATION AND LOGIN

void UserRegistration();
void UserLogin();

// EMPLOYEE

void Employee();
void AccountManagement();
void TransactionHistory();
void TransferMoney();
void LoanManagement();

// CUSTOMERS

void Customers();
void ViewAccountDetails();
void AccountBalance();
void Payment();
void ApplyForLoan();

// EXIT

void GoToMainMenu();
void ExitApplication();

#endif // TOOLS_H
