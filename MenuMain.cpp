#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include "Game.h"
#include "Rules.h"
#include "ScoreM.h"

using namespace std;

int main(){
g:
	system("cls");
	int option;
	setlocale(LC_ALL, "Russian");
	for (int i = 0; i<10; i++)
		cout << "*";
	cout << "KEYBOARDNINJA";
	for (int i = 0; i<10; i++)
		cout << "*";
	cout << endl;
	cout << "* 1. Начать игру \n";
	cout << "* 2. Правила \n";
	cout << "* 3. Таблица рекордов\n";
	cout << "* 4. Выход\n";

	cin >> option;

	switch (option)
	{
		case 1:
			system("cls");
			Game();
		break;
		case 2:
			system("cls");
			Rules();
			_getch();
			system("cls");
			goto g;
		break;
		case 3:
			system("cls");
			ScoreM();
			_getch();
			system("cls");
			goto g;
		break;
		case 4:
			return 0;
		default: goto g;
	}


	system("PAUSE");
	return 0;
}
