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
	int option;
	setlocale(LC_ALL, "Russian");
	cout<<"KEYBOARDNINJA \n\n";
	cout<<"1. ������ ���� \n";
	cout<<"2. ������� \n";
	cout<<"3. ������� ��������\n";
	cout<<"4. �����\n";
	
	cin>>option;
		
	switch(option)
	{
	case 1: 	
		system("cls");
		 Game();    
		 break;	
	case 2: 	
		system("cls"); 
		Rules();
		getch();
	    system("cls");
		goto g;	
		break;
	case 3: 
		system("cls");
		ScoreM();
		getch();
	    system("cls");
		goto g;	 
		break;
	case 4: 
		return 0;
	}
	

	system("PAUSE");
}
