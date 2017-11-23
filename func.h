#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

string* devide(char* comand, int &count)
{
	string* lexems = new string[20];
	char *token;
	char *cst = new char[1000];

	strcpy(cst, comand);
	char *baryer = " ";
	token = strtok(cst, baryer);

	int i = 0;

	while (token != NULL)
	{
		lexems[i++] = token;
		token = strtok(NULL, baryer);
		if (i == 2) break;
	}

	int len = lexems[0].length() + lexems[1].length();

	for (int j = len + 2; j < strlen(comand); j++) lexems[2] += comand[j];

	count = i;
	count++;

	delete[] cst, baryer;
	return lexems;
}

void help()
{

	ifstream f("help.txt");

	int n = 0;
	while (!f.eof()) {
		string definition;
		f >> definition;
		cout << definition<<" ";
		if (definition == ";")
		{
			cout << '\n';
		}
		n++;
	}

	f.close();
	cout << endl;
}