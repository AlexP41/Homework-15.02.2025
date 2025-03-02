
#include <iostream>
#include <fstream>
#include <string>


using namespace std;


/*
�2
	���� ��������� ����. ������� ����� ���� � �������� �� ����� �������� ���������� �� �������� ������:
		������� �������;
		������� �����;
		������� �������� ����;
		������� ����������� ����;
		������� ����.
*/

bool isVowel(char c)
{
	string vowels = "aeiouAEIOU����������������ߪ��";
	return (vowels.find(c) != string::npos);
}

bool isConsonant(char c)
{
	string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ�����������������������å������������������";
	return (consonants.find(c) != string::npos);
}


int exercise2()
{
	system("chcp 1251>null");


	ifstream file_2_1("file_2_1.txt");
	if (!file_2_1)
	{
		cout << "���� file_2_1.txt �� �������� �����������" << endl;
		return 1;
	}
	
	int numberOfSymbols = 0;
	int numberOfRows = 0;
	int numberOfVowels = 0;
	int numberOfConsonants = 0;
	int numberOfNumbers = 0;
	string currentLine;

	while (getline(file_2_1, currentLine))
	{
		for (char s : currentLine)
		{
			if (isdigit(static_cast <unsigned char>(s))) {
				numberOfNumbers++;
			}
			else if (isVowel(s)) {
				numberOfVowels++;
			}
			else if (isConsonant(s)) {
				numberOfConsonants++;
			}
			if (s != ' ') numberOfSymbols++;
		}

		numberOfRows++;
	}

	file_2_1.close();



	ofstream file_2_2("file_2_2.txt", ios::out);
	file_2_2 << "ʳ������ �������: " << numberOfSymbols << endl;
	file_2_2 << "ʳ������ �����: " << numberOfRows << endl;
	file_2_2 << "ʳ������ �������� ����: " << numberOfVowels << endl;
	file_2_2 << "ʳ������ ����������� ����: " << numberOfConsonants << endl;
	file_2_2 << "ʳ������ ����: " << numberOfNumbers << endl;

	file_2_2.close();


	cout << "\033[042m����� ���������.\033[0m\n���������� �������� � 'file_2_2.txt'" << endl;

	return 0;
}


