#include <iostream>
#include "BankAccount.h"

void BankAccount::AccountInformation()
{
	std::cout << "Informacje o koncie bankowym \n";
	std::cout << "Właściciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n";
}