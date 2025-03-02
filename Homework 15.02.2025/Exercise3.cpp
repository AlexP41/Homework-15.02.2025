
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;


/*
	�3
		���� ��������� ����. ������� � ����� ������� �����.
		��������� �������� �� ������ �����.
*/




int exercise3()
{
	system("chcp 1251>null");


	ifstream file_3_1("file_3_1.txt", ios::app);

	if (!file_3_1)
	{
		cout << "���� file_3_1.txt �� �������� �����������" << endl;
		return 1;
	}
	string currentLine;
	vector<string>lines;

	while (getline(file_3_1, currentLine))
	{
		lines.push_back(currentLine);
	}

	if (!lines.empty())
	{
		lines.pop_back();
	}

	file_3_1.close();




	ofstream file_3_2("file_3_2.txt", ios::out);
	if (!file_3_2.is_open())
	{
		cout << "���� file_3_2.txt �� �������" << endl;
		return 1;
	}
	
	for (const string& line: lines)
	{
		file_3_2 << line << endl;
	}

	file_3_2.close();


	cout << "\033[042m����� ���������.\033[0m\n���������� �������� � 'file_3_2.txt'" << endl;

	
	return 0;
}


