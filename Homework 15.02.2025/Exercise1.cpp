
#include <iostream>
#include <fstream>
#include <string>


using namespace std;


/*
	�1
	���� ��� ������� �����. �'������, �� ���������� ��� �����.
	���� �, �� ������� �� ������� ����� �����, ���� �� �������.
*/

int exercise1()
{
	system("chcp 1251>null");


	ifstream file1("file1.txt");
	if (!file1)
	{
		cout << "���� file1.txt �� �������� �����������" << endl;
		return 1;
	}


	ifstream file2("file2.txt");
	if (!file2)
	{
		cout << "���� file2.txt �� �������� �����������" << endl;
		return 1;
	}

	string line1, line2;
	int lineNumber = 1;
	int lineNumForText1 = 1;
	int lineNumForText2 = 1;
	bool filesAreSame = true;

	while (getline(file1, line1) && getline(file2, line2))
	{
		if (line1 != line2) {
			cout << "\t\t\033[031m����� " << lineNumber << " �� �������:\033[0m\n";
			cout << "���� 1: " << line1 << endl;
			cout << "���� 2: " << line2 << endl;
			cout << endl;
			filesAreSame = false;
		}
		lineNumber++;
		lineNumForText1++;
		lineNumForText2++;
	}

	while (getline(file1, line1)) {
		cout << "���� 1 ������ ������ ����� " << lineNumber << ": " << line1 << endl;
		filesAreSame = false;
		lineNumber++;
	}
	while (getline(file2, line2)) {
		cout << "���� 2 ������ ������ ����� " << lineNumber << ": " << line2 << endl;
		filesAreSame = false;
		lineNumber++;
	}

	if (filesAreSame) {
		cout << "����� ��������" << endl;
	}

	file1.close();
	file2.close();


	return 0;
}


