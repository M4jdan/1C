#include <iostream>

//Napissz program kt�ry obliczy odleg�o�c punktu 2d od innego punktu 

void Task1()
{
	double x, y;
	std::cout << "Podaj x\n";
	std::cin >> x;

	std::cout << "Podaj y\n";
	std::cin >> y;

	double distance = sqrt(x * x + y * y);

	std::cout << "Odleg�o�c to : " << distance << "\n";