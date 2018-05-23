#include <iostream>
#include <cstdlib>
#include "Time.h"
#include "Rand.h"
#include <conio.h>

using namespace std;
int c,k;


int MainMenu()
{
	setlocale(LC_ALL, "Russian");
	int option;
	cout << "Choose the option \n" << endl;
	cout << "1. Start training \n"
		 << "2. Highscores \n"
		 << "3. Rules \n"
		 << "4. Exit \n" << endl;
	cout << ">>> ";
	cin >> option;
	return option;
}

int MenuOption(int option){

	int textnum;
	
	switch (option) {
	case 1:
		system("cls");
		cout << "Starting..." << endl;
		textnum = Rand();
		Time(textnum);
		break;
	case 2:
		system("cls");
		option = 0;
		cout << "Highscores..." << endl;
		cout << "Press any button to return to main menu" << endl;
		getch();
		system("cls");
		option = MainMenu();
		MenuOption(option);
	case 3:
		system("cls");
		cout << "Rules..." << endl;
		cout << "Press any button to return to main menu" << endl;
		getch();
		system("cls");
		option = MainMenu();
		MenuOption(option);
		
		break;
	case 4:
		cout << "Exiting..." << endl;
		exit(EXIT_SUCCESS);
		break;
	default:
		cerr << "Wrong option" << endl;
		exit(EXIT_FAILURE);
	}
	cin >> option;
	return 0;
	
}

int main(int argc, char* argv[]){ 
	int option = MainMenu();
	MenuOption(option);
	return 0;
}
