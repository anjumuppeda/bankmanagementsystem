#include <stdio.h>
 #include <string.h>

 #define MAX_ACCOUNTS 50

 // Structure for bank account 

 struct bankaccount 
 {
 int bankaccountNumber;
 char name[50];
 char password[15];
 float balance;
 char branch[30];
 char upi[20];
 char mobile[11];
 };


 struct bankaccount accounts[MAX_ACCOUNTS];
 int totalAccounts = 0;

 // Function i used in bankaccount

 void createBankAccount();
 void depositMoney();
 void withdrawMoney();
 void checkBalance();
 void bankAccountClose();
 void transfer();
 void displayMenu(); 

 int main()
 {
 int choice;
 while (1)
  {
  displayMenu();
  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice)
 {  
  case 1: createBankAccount();
  break;
 
  default:
  printf("Invalid choice! \n");
  }
  }
  return 0;
  }

// Function to display in screen
 
void displayMenu()
 {
   printf("Bank Management System\n");
   printf("1. CreateBankAccount\n");
   printf("2. DepositMoney\n");
   printf("3. WithdrawMoney\n");
   printf("4. CheckBalance\n");
   printf("5. Exit\n");
   printf("6. CloseBankAccount\n");
   printf("7. Transfermoney\n");
 }
  // creating bank account
   
  void createBankAccount()
 {
 if(MAX_ACCOUNTS < 50)
 return;
 {
  struct bankaccount newAccount;

   printf("Enter the name: ");
   scanf("%s", newAccount.name);
   printf("Enter branch name: ");
   scanf("%s", newAccount.branch);
   printf("Enter UPI ID: ");
   scanf("%s", newAccount.upi);
   printf("Enter mobile number: ");
   scanf("%s", newAccount.mobile);
   printf("Enter password: ");
   scanf("%s", newAccount.password);

   printf("Account created successfully!\n");
   printf("the Account Number is: %d\n", newAccount.bankaccountNumber);
 } 
 }