
#include <iostream>
#include <fstream>
#include <string>


using namespace std;


/*
¹2
	Ìàºìî òåêñòîâèé ôàéë. Ñòâîð³òü íîâèé ôàéë ³ çàïèø³òü äî íüîãî íàñòóïíó ñòàòèñòèêó çà âèõ³äíèì ôàéëîì:
		ê³ëüê³ñòü ñèìâîë³â;
		ê³ëüê³ñòü ðÿäê³â;
		ê³ëüê³ñòü ãîëîñíèõ ë³òåð;
		ê³ëüê³ñòü ïðèãîëîñíèõ ë³òåð;
		ê³ëüê³ñòü öèôð.
*/

bool isVowel(char c)
{
	string vowels = "aeiouAEIOUàåèîóþÿº³¿ÀÅÈÎÓÞßª²¯";
	return (vowels.find(c) != string::npos);
}

bool isConsonant(char c)
{
	string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZáâã´äæçéêëìíïðñòôõö÷øùÁÂÃ¥ÄÆÇÉÊËÌÍÏÐÑÒÔÕÖ×ØÙ";
	return (consonants.find(c) != string::npos);
}


int exercise2()
{
	system("chcp 1251>null");


	ifstream file_2_1("file_2_1.txt");
	if (!file_2_1)
	{
		cout << "Ôàéë file_2_1.txt íå ñòâîðåíî àâòîìàòè÷íî" << endl;
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
	file_2_2 << "Ê³ëüê³ñòü ñèìâîë³â: " << numberOfSymbols << endl;
	file_2_2 << "Ê³ëüê³ñòü ðÿäê³â: " << numberOfRows << endl;
	file_2_2 << "Ê³ëüê³ñòü ãîëîñíèõ ë³òåð: " << numberOfVowels << endl;
	file_2_2 << "Ê³ëüê³ñòü ïðèãîëîñíèõ ë³òåð: " << numberOfConsonants << endl;
	file_2_2 << "Ê³ëüê³ñòü öèôð: " << numberOfNumbers << endl;

	file_2_2.close();


	cout << "\033[042mÀíàë³ç çàâåðøåíî.\033[0m\nÐåçóëüòàòè çàïèñàíî ó 'file_2_2.txt'" << endl;

	return 0;
}


