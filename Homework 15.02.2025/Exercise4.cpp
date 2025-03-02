
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;


/*
№4
	Маємо текстовий файл. Знайдіть довжину найдовшого рядка.
*/




int exercise4()
{
	system("chcp 1251>null");


	ifstream file_4_1("file_4_1.txt", ios::app);

	if (!file_4_1)
	{
		cout << "Файл file_4_1.txt не створено автоматично" << endl;
		return 1;
	}
	string currentLine;
	int numberOfTheLongestLine = 1;
	int currentLineNumber = 1;
	int theBiggestNumberOfSymbols = 0;

	while (getline(file_4_1, currentLine))
	{
		int numberOfSymbols = 0;
		for (const auto& c: currentLine)
		{
			numberOfSymbols++;
		}

		if (numberOfSymbols > theBiggestNumberOfSymbols)
		{
			theBiggestNumberOfSymbols = numberOfSymbols;
			numberOfTheLongestLine = currentLineNumber;
		}

		currentLineNumber++;
	}




	file_4_1.close();

	cout << "\033[042mАналіз завершено.\033[0m\nРезультати: " << endl;
	cout << "Номер найдовшого рядка: " << numberOfTheLongestLine << endl;
	cout << "Довжина найдовшого рядка: " << theBiggestNumberOfSymbols << endl;

	return 0;
}


