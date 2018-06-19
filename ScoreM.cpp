#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;
 
void ScoreM()
{
	setlocale(LC_ALL, "Russian");
	char buff[40];
	int i = 0;
	ifstream fin("1.txt");
	cout << "NAME  SCORE" << endl;
	while (i < 20){
			fin.getline{buff, 40};
			cout << buff << endl;
			i++;
	}
	fin.close();
	system("PAUSE");
}
