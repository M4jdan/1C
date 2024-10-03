
#include <iostream>

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;
};

void accountInformation(BankAccount &account)
{
	std::cout << "Informacje o koncie bankowym \n";
	std::cout << "W�a�ciciel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << "\n";
}

int main()
{
	BankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z�";

	accountInformation(firstAccount);

	BankAccount secondAccount;
	secondAccount.balance = 3200;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.currency = "z�";

	accountInformation(secondAccount);
}