#ifndef TOOLS_H
#define TOOLS_H

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
