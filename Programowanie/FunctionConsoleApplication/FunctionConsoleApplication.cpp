﻿#include <iostream>

/*
Funkcja 
    - zbiór instrukcji realizujący zadanie.
    - Nazywana podprogramem

Budowa:
    * naglówek
    * ciało funkcji - instrukcje

Nagłówek:
    typ_zwracanej_zmiennej   nazwa_funckji(parametry)
*/

//napiz funkcję. która wyświetli na konsoli hello world!

void task1()
{
    std::cout << "Hello World!\n";
}

//Napisz funkcję uniwersalną, która pozwala wyświetlić dowolbny tekst
void task2(std::string textParam)
{   
    std::cout << textParam << "\n";
}

//Napisz funkcję uniwersalną która wyświetli imie i infoirmacje czy ktoś jest pełnoletni czy nie
void task3(std::string name, int age)
{
    if (age >= 18)
        std::cout << name << "jest pełnoletni/a";
    else
        std::cout << name << "nie jest pełnoletni/a";
}

void task4(int number)
{
    std::cout << "Zmienna number w funkcji task4: " << number << "\n";
    number--;
    std::cout << "Zmienna number w funkcji task4: " << number << "\n";
}

//Napisz program który przekaże parametr przez referencje
void task5(int &number)
{
    std::cout << "Zmienna number w funkcji task5: " << number << "\n";
    number--;
    std::cout << "Zmienna number w funkcji task5: " << number << "\n";
}

void task6(int &numberFromUser)

int main()
{
    /*task1();
    task1();
    task2("Witajświecie!");
    task2("Ala ma kota !");
    std::string text = "Uczyć się programowania (czy ala miała psa???????)";
    task2(text);

    task3("Jan", 35);
    task3("ala", 17);*/

    int number = 5;
   // std::cout << "Zmienna number w funkcji main: " << number << "\n";
    //task4(number);
    //std::cout << "Zmienna number w funkcji main: " << number << "\n";

    //task4(9);
    const int NUMBER = 9;
    //task4(NUMBER);

    std::cout << "Zmienna number w funkcji main: " << number << "\n";
    task5(number);
    std::cout << "Zmienna number w funkcji main: " << number << "\n";

   // task5(9); //błąd - parametr może być tylko zmienną
    //task5(NUMBER); //błąd - parametr może być tylko zmienną

