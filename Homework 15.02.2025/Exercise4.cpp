
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;


/*
�4
	���� ��������� ����. ������� ������� ���������� �����.
*/




int exercise4()
{
	system("chcp 1251>null");


	ifstream file_4_1("file_4_1.txt", ios::app);

	if (!file_4_1)
	{
		cout << "���� file_4_1.txt �� �������� �����������" << endl;
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

	cout << "\033[042m����� ���������.\033[0m\n����������: " << endl;
	cout << "����� ���������� �����: " << numberOfTheLongestLine << endl;
	cout << "������� ���������� �����: " << theBiggestNumberOfSymbols << endl;

	return 0;
}


