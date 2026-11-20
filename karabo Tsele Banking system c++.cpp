#include <iostream>

using namespace std;


//user Details//
string customerName [3] ={ "Ruth", "Peter", "John"};
string customerAccount[3]= {"1234567890", "6829468497", "6362827198"};
string customerPIN[3]={"6466","5639","3389"};
double customerBalance[3]= {80500,53000,43000};

//variables //
double balance= 100000;
double amount;
double depositAmount;
double withdrawal;
int transferMoney;
int attempts= 3;
int user = -1;
string accountNumber;
int option;


void welcomeScreen()
{
    cout<< "================================================================================================================"<< endl;
    cout<< "                                   AWAKEN TO PURPOSE BANK                                                         "<< endl;
    cout<< "==============================================================================================================="<< endl;
    cout << "           *******************WELCOME TO ATP BANKING SYSTEM************************                                                       "<< endl;
    cout << ""<< endl;
    cout << "==============================================================================================================="<<endl;
    cout<< ""<<endl;
    cout<< "1. User login"<< endl;
    cout<< "2. View Account Details"<<endl;
    cout<< "3. Check bank balance"<< endl;
    cout<< "4. Deposit"<< endl;
    cout<< "5. Withdraw"<< endl;
    cout<< "6. Send Cash" << endl;
    cout<< "7. Exit"<< endl;
    cout <<""<<endl;
    cout << "==============================================================================================================="<<endl;
    cout<< "Choose an option"<<endl;
    cin>> option;
}

void userLogin()
{
int enterAccountNumber;
int enterPIN;
            cout<< "*************************USER LOGIN****************************************"<<endl;
            cout<< "----------------------------------------------------------------------------------------------------------"<<endl;
            cout << "Enter account number:"<< endl;
            cin>>enterAccountNumber;
            cout << "Enter PIN: "<<endl;
            cin>>enterPIN;
            cout << "--------------------------------------------------------------------------------------------------------"<<endl;

            if ((enterAccountNumber == 1234567890&& enterPIN ==6466) ||
                (enterAccountNumber == 6829468497&& enterPIN ==5639) ||
                (enterAccountNumber == 6362827198&& enterPIN ==3389))
    {
        cout<< "********************************************************************"<<endl;
        cout<< "Login Successful"<<endl;
        cout<< "********************************************************************"<<endl;
        cout<< "welcome to ATP Banking system!"<<endl;
    }
    else
        {
            cout<< "*****************************************************************"<<endl;
            cout << "Account not found "<<endl;
            cout<< "*****************************************************************"<<endl;
        }
    }


void deposit ()
{
    cout << "*************DEPOSIT MONEY**************"<<endl;
    cout<< "Enter amount to deposit R:" << endl;
    cin>>depositAmount;

    if (depositAmount>0 )
    {
       cout << ""<< endl;
       cout<< "Deposited successfully"<<endl;


    balance= balance+ depositAmount;
    cout<< "You new balance is R:"<<balance<<endl;
    }
    else (amount >= 0 );
    {
       cout<< "Invaild amount! Should enter amount greater than 0"<<endl;
       return;
    }

}

void withdraw()
{
    cout<< "***********WITHDRAW MONEY***************"<<endl;
    cout<< "Enter amount to deposit R:"<<endl;
    cin>>withdrawal;

    if (withdrawal<= 0)
    {
      cout<< "Invaild amount! Enter amount greater then R0"<< endl;
      return;
    }
   else if (withdrawal >balance )
    {
        cout<< "Insufficient Funds"<< endl;
        cout << "Available balance: R"<< balance<<endl;
        return;
    }
    else
    {
        balance = balance - withdrawal;
        cout<< ""<<endl;
        cout <<"Withdrew Successfully!"<<endl;
        cout << "Avaiable balance: R"<<balance<<endl;
    }

}
void sendMoney()
{
    cout<< "************SEND MONEY***************"<<endl;
    cout<< "Enter Account Number "<<endl;
    cin>> accountNumber;
    if(accountNumber != "1234567890")
    {
        cout<< "Incorrect Account Number. Try Again!"<<endl;
        attempts--;
        cout<< "You have"<<attempts<< "attempts left"<< endl;

        if(attempts==0)
        {
        cout<< "No attempts left"<< endl;
        return;
        }
    }

    else
    {
        cout<< "Correct Account Number "<< endl;
        attempts=0;
    }

    cout<< "Enter amount to send" << endl;
    cin >>amount;


    if (amount > balance)
    {
        cout << "Insufficient Funds"<< endl;
        return;
    }
       balance= balance- amount ;
    cout<< "Your new balance is R:"<< balance<<endl;
}

void showBalance ()
{
    cout << "**************SHOW BALANCLE ****************"<<endl;
    cout << "R"<< balance <<endl;



}

void menu()
{
    int option;
    do
    {
    cout<< "Enter 1 to View Account Details"<<endl;
    cout<< "Enter 2 to  Deposit"<< endl;
    cout<< " Enter 3 to Withdraw"<< endl;
    cout<< "Enter 4 to Send Cash" << endl;
     cout<< "Enter 5 to Check bank balance"<< endl;
    cout<< "enter 6 to  Exit"<< endl;
    cin>> option;
    switch(option)
    {
      case 1:
           deposit ();
           break;
      case 2:
           withdraw();
           break;
      case 3:
           sendMoney();
           break;
      case 4:
           showBalance();
           break;
      case 5:
        cout<< "************Thank You For Your Constant Spend, Please Contiue Banking With us ATP BANK*****************"<<endl;
        break;
      default:
        cout << "Invald choice. Try again!"<< endl;
}
} while(option != 6);
}

int main()
{
    int option = 0;
    while (option !=6)
    {
        welcomeScreen ();
        userLogin();
        menu ();

        if (option == 1)
        {
            userLogin();
        }
        else if (option == 2)
        {
            cout<< "Deposit selected!"<<endl;
        }
        else if (option ==3)
        {
            cout<< "Withdraw selected!"<< endl;
        }
        else if (option ==4)
        {
            cout<< "Send Money selected!"<<endl;
        }
        else if (option ==5)
        {
            cout<< "Check Balance selected!"<<endl;
        }
        else
        {
            cout<< "Invaild option. Try Again"<<endl;
        }
    }
    return 0;

}
