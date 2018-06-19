#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <conio.h>

using namespace std;
 
void ScoreM()
{
	setlocale(LC_ALL, "Russian");
	char buff[40];
	int i = 0;
	ifstream fin("1.txt");
	cout << "Imya  schet" << endl;
	while (i < 20){
			fin.getline{buff, 40};
			cout << buff << endl;
			i++;
	}
	fin.close();
	system("PAUSE");
}
