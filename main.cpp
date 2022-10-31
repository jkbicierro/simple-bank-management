/*

	Basic Bank System C/C++

*/

// Includes
#include <iostream>
using namespace std;

#define NEWACCOUNT 		1
#define DEPOSIT 		2
#define WITHDRAW 		3
#define BALANCE 		4
#define DELACCOUNT 		5
#define EXIT 			6

class User {
	public:
		string username;
		string password;
		int option;
};
User user;

void clearChat(int amount) {
	for(int i = 0; i < amount; i++) {
		printf("\n");
	}
}

void interactMenu(int menu) {
	
	switch(menu)
	{
		case NEWACCOUNT: {
			
			break;
		}
		case DEPOSIT: {
			
			break;
		}
		case WITHDRAW: {
			
			break;
		}
		case BALANCE: {
			
			break;
		}
		case DELACCOUNT: {
			
			break;
		}
		case EXIT: {
			
			break;
		}
	}
	
}

void bankMenu() {
	printf("Basic Bank System (Menu)\n");
	printf("------------------\n");
	printf("1. New Account\n");
	printf("2. Deposit\n");
	printf("3. Withdraw\n");
	printf("4. Balance Inquiry\n");
	printf("5. Delete Account\n");
	printf("6. Edit Account\n");
	printf("7. Exit\n");
	printf("------------------\n");
	printf("Enter number: ");
	cin >> user.option;
	interactMenu(user.option);
}

void loginCheck() {
	clearChat(1);
	bankMenu();
}

void loginMenu(int choice) {
	clearChat(1);
	if(choice == 1) // Login
	{
		printf("Enter your bank account\n");
		printf("------------------\n");
		printf("Username: ");
		cin >> user.username;
		printf("Password: ");
		cin >> user.password;
		loginCheck();
	}
	else { // Register
		
	}

}

int main() {
	int choice;
	printf("1 Login - 2 Register\n");
	printf("------------------\n");
	printf("Enter number: ");
	cin >> choice;
	loginMenu(choice);
	return 0;
}
