#include <iostream>
#include "BankAccount.h"

void BankAccount::AccountInformation()
{
	std::cout << "Informacje o koncie bankowym \n";
	std::cout << "W�a�ciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n";
}