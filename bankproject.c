 #include<stdio.h>
 #include<sting.h>
 
 #define MAX_CREATEACCOUNTS 50

 struct bankaccount
 {
    int bankaccountNumber;
    char name[50];
    char password[15];
    float balance;
    char branch[30];
    char upi[20];
    char mobile[10];
 }
 struct Account accounts[MAX_ACCOUNTS];

 // Function i used in bankaccount
 void createbankAccount();
 void transfer();
 void deposit money());
 void withdraw money();
 void bankaccount close();
 void checkBalance();
 void exit();

 int main() {
 int = 1;
 int choice;

 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch(choice) 
 {
 case 1:createbankAccount();
 break;
 case 2:depositmoney();
 break;
 case 3:withdrawmoney();
 break;
 case 4:checkBalance();
 break;
 case 5:printf("Exiting the system. Thank you!\n");
 exit(0);
 default:printf("Invalid choice! \n");
 }
 }
    return 0;
 }
 // Function to display in sceen 
 void ()
 {
    printf("BankManagementSystem\n");
    printf("1. CreatebankAccount\n");
    printf("2. DepositMoney\n");
    printf("3. WithdrawMoney\n");
    printf("4. CheckBalance\n");
    printf("5. Exit\n");
 }

