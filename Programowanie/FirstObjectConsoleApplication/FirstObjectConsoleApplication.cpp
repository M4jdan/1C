
#include <iostream>

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;

	void AccountInformation()
	{
		std::cout << "Informacje o koncie bankowym \n";
		std::cout << "W�a�ciciel: " << owner << "\n";
		std::cout << "Saldo: " << balance << " " << currency << "\n";
	}
};



int main()
{
	BankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z�";

	firstAccount.AccountInformation();

	BankAccount secondAccount;
	secondAccount.balance = 3200;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.currency = "z�";

	secondAccount.AccountInformation();
}