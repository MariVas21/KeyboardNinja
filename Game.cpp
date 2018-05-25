#include <iostream>
#include "Keyboard.h"
#include "InputScore.h"
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <ctime>
#include <fstream>
#include <windows.h>

int count = 0;
	
using namespace std;

void Time (clock_t delay);

void Game() {
	char ch;
	srand (time (NULL) + rand ());
	float sec=15;
	SetConsoleCP (1251);
	SetConsoleOutputCP (1251);
	cout << "Нажмите пробел, чтобы продолжить";
	while(!kbhit()){
		ch=getch();
		if ( ch == 32){
			system ("cls");
			clock_t delay = sec * CLOCKS_PER_SEC;
			Time (delay);	
			}
		else cout<<"Error";
		}
}

void Time (clock_t delay) {	

}
    cout << "\n Вы проиграли! Время вышло";
	system ("cls");
	InputScore(count);
    system ("cls");
    Beep (160, 220);
   system ("PAUSE >> NULL");
   exit(1);
}
