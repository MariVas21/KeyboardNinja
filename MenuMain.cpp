#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <string>

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
		break;	
	case 2: 	
		system("cls"); 
		getch();
	    system("cls");
		goto g;	
		break;
	case 3: 
		system("cls");
		printf("Score"); 
		getch();
	    system("cls");
		goto g;	 
		break;
	case 4: 
		return 0;
	}
	

	system("PAUSE");
}
