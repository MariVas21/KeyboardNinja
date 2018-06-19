#include <iostream>
#include "Keyboard.h"
#include "InputScore.h"
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <ctime>
#include <string> 
#include <fstream>
#include <windows.h>
#include "ScoreM.h"

int count1 = 0;
	
using namespace std;
	const int size = 100;
	int reg = 0;
    string TextMas [size];

void Time (clock_t delay);

void Game() {
	setlocale(LC_ALL, "Russian");
	char ch;
	srand (time (NULL) + rand ());
	float sec=15;
	SetConsoleCP (1251);
	SetConsoleOutputCP (1251);
	f:
	cout << "Press space to continue \n";
	while(!kbhit()){
		ch=getch();
		if ( ch == 32){
			system ("cls");
			clock_t delay = sec * CLOCKS_PER_SEC;
			Time (delay);	
			}
		else goto f;
		}
}

void Mas(){
	ifstream TextFile ("TextMas.txt");
	for ( ; reg < size; reg++) {
		TextFile >> TextMas [reg];
		if (TextFile.eof())
		break;
	}
}

void Time (clock_t delay) {	
	srand (time (NULL) + rand ());
	clock_t start = clock();
	Mas();
	char ch1;	
	KEYS curKey = NOKEY;
	string OutText = TextMas [0 + rand () % reg];
	string InpText;
	
	while (clock() - start < delay ) {
		system ("cls");
		cout << "TIME: " << clock() << "\n\n";
		cout << OutText;
	    curKey = keyPressed ();
		
		switch (curKey) {
			case a:
				InpText += "a";
				break;
				
			case b:
				InpText += "b";
				break;
				
			case c:
				InpText += "c";
				break;
				
			case d:
				InpText += "d";
				break;
				
			case e:
				InpText += "e";
				break;
				
			case f:
				InpText += "f";
				break;
				
			case g:
				InpText += "g";
				break;
				
			case h:
				InpText += "h";
				break;
				
			case i:
				InpText += "i";
				break;
				
			case j:
				InpText += "j";
				break;
				
			case k:
				InpText += "k";
				break;
				
			case l:
				InpText += "l";
				break;
			
			case m:
				InpText += "m";
				break;
				
			case n:
				InpText += "n";
				break;
				
			case o:
				InpText += "o";
				break;
				
			case p:
				InpText += "p";
				break;
				
			case q:
				InpText += "q";
				break;
				
			case r:
				InpText += "r";
				break;
				
			case s:
				InpText += "s";
				break;
				
			case t:
				InpText += "t";
				break;
				
			case u:
				InpText += "u";
				break;
			
			case v:
				InpText += "v";
				break;	
				
			case w:
				InpText += "w";
				break;
				
			case x:
				InpText += "x";
				break;
				
			case y:
				InpText += "y";
				break;
				
			case z:
				InpText += "z";
				break;
				
			default:
					if (curKey == space) {
						string temp = "";
						InpText = temp;
					}
					curKey = NOKEY;
				break;
		}
		
		cout << "\n... " << InpText;
		Sleep (100);
		 
		if (OutText.size() == InpText.size()) {
				if (OutText  != InpText ) {
					h:
					system ("cls");		
					cout << "\n Vi proigrali! Press 'enter', to continue";
					ch1 = getch();
					if ( ch1 == 13){
						Beep (160, 520);
						system("cls");
						cout << "\n Vash schet: " << count1;
						InputScore(count1);
						ScoreM();
						exit(1);	
					}
					else goto h;
			}
				else {
					Beep (400, 50);
					count1+=10;
					cout << "\n Верно!";
					Time (delay);
					}	
				}
}
    cout << "\n Vi proigrali! Vashe vremya vishlo";
	system ("cls");
	InputScore(count1);
    system ("cls");
    Beep (160, 420);
   system ("PAUSE");
   exit(1);
}
