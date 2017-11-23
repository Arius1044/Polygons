#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include "Polygon.h"
#include "Point.h"
#include "Line.h"
#include "func.h"
using namespace std;

int main()
{
	char* comand = new char[100];
	string* comands;

	Poly polygon;

	while (true)
	{
		cout << "_________________________________________________________\n\n";
		cin.getline(comand, 100);
		cout << "_________________________________________________________\n\n";

		int comands_size = 0;
		comands = devide(comand, comands_size);
		if (comands[0] == "--p")
		{
			if (comands[1] == "new")
			{
				int N;
				cin >> N;
				polygon = Poly(N);
			}
			else if (comands[1] == "move_x")
			{
				float x;
				cin >> x;
				Point A(x, 0);
				polygon += A;
			}
			else if (comands[1] == "move_y")
			{
				float y;
				cin >> y;
				Point A(0, y);
				polygon += A;
			}
			else if (comands[1] == "move_point")
			{
				float x, y;
				cin >> x>>y;
				Point A(x, y);
				polygon += A;
			}
			else if (comands[1] == "zoom")
			{
				float koef;
				cin >> koef;
				polygon *= koef;
			}
		}
		else if (comands[0] == "--c")
		{
			if (comands[1] == "draw") 
			{
				cout << "\n\n\n\n\n\n\n\n\\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				polygon.draw(); 
			}

		}
		else if (comands[0] == "help")
		{
			cout << "\n\n\n\n\n";
			help();
			cout << "\n\n\n\n\n";
		}

	}

	system("pause");
	return 0;
}
