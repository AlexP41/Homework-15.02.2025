/*
РОБОТА З ФАЙЛАМИ
================


P.S.: перегляньте питання до іспиту, майте на них відповіді

*/


#include <iostream>
#include <fstream>
#include <string>


#include "exercise1.h"
#include "exercise2.h"
#include "exercise3.h"
#include "exercise4.h"

using namespace std;


void exercise(int numberOfExercise)
{
	cout << endl << endl << "\t\t\t\t\033[032mExercise " << numberOfExercise << "\033[0m" << endl << endl;
}


int main()
{
	system("chcp 1251>null");

	/*
	№1
		Маємо два текстові файли. З'ясуйте, чи співпадають їхні рядки.
		Якщо ні, то виведіть із кожного файлу рядок, який не співпадає.
	*/
	exercise(1);

	exercise1();


	/*
	№2
		Маємо текстовий файл. Створіть новий файл і запишіть до нього наступну статистику за вихідним файлом:
			кількість символів;
			кількість рядків;
			кількість голосних літер;
			кількість приголосних літер;
			кількість цифр.
	*/
	exercise(2);
	exercise2();


	/*
	№3
		Маємо текстовий файл. Видаліть з нього останній рядок. 
		Результат запишіть до іншого файлу.
	*/

	exercise(3);
	exercise3();


	/*
	№4
		Маємо текстовий файл. Знайдіть довжину найдовшого рядка.
	*/

	exercise(4);
	exercise4();

	return 0;
}

