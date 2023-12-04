#include <cstdio>
#include <map>
#include <cstdlib>

using namespace std;

class BankAccount

{
	static int number_of_accounts;
	int balance;
	int account_number;
public:
	BankAccount()
	{
		balance = 0;
		number_of_accounts++;
		account_number = number_of_accounts;
	};
	int get_uid()
	{
		return account_number;
	};
	void deposit(int sum)
	{
		balance += sum;
		print_balance();
	};
	
	void print_balance()
	{
		printf("Current balance: %d\n", balance);
	};

	void withdraw(int sum)
	{
		if(balance < sum)
		{
			printf("Not enough money.\n");
			
		}else
		{
			balance -= sum;
		};
	};	


};

int BankAccount::number_of_accounts = 0;


map<int, BankAccount> accounts;


void login(BankAccount* user, int& login_status)
{
	int action;
	printf("Choose action: \n1 - Login, \n2 - Create account\n3 - Exit\n");	
	scanf("%d", &action);
	switch(action)
	{
		case 1:
			int uid;
			printf("Enter your id: \n");
			scanf("%d", &uid);
			if(accounts.find(uid)!=accounts.end())
			{
				user = &accounts[uid];
				printf("Logged in\n");
				login_status = 1;
			}else
			{
				printf("User with the id doesn't exist\n");
			};
			break;
		case 2:
			user = new BankAccount();
			printf("Account is created. Your id : %d\n", user->get_uid());
			accounts[user->get_uid()] = *user;
			break;
		case 3:
			exit(EXIT_SUCCESS);
			break;
		default:
			printf("Wrong optin\n");
	};
};

void account_actions(BankAccount* user)
{
	int action;
	int number;
	printf("Choose action: \n1 - Check balance\n2 - Deposit\n3 - Withdraw\n4 - Exit\n");
	scanf("%d", &action);
	switch(action)
	{
		case 1:
			user->print_balance();
			break;
		case 2:
			printf("Enter number to deposit: \n");
			scanf("%d", &number);
			user->deposit(number);
			user->print_balance();
			break;
		case 3:
			printf("Enter a number to withdraw: \n");
			scanf("%d", &number);
			user->withdraw(number);
			user->print_balance();
			break;
		case 4:
			exit(EXIT_SUCCESS);
			break;
		default:
			printf("Wrong option\n");
	};
};


int main()
{
	int isLogged = 0;
	BankAccount ba;
	int uid;

	while(isLogged != 1)
	{
		login(&ba, isLogged);
	};

	while(true)
	{
		account_actions(&ba);
	};

	return 0;
}
