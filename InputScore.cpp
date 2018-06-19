#include<fstream>
#include <iostream>
#include <ctime>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>


using namespace std;


void InputScore(int count1){
	//setlocale(LC_ALL, "Russian");
	struct record { string name; int score;  };
	int const MAX = 1;
	int b = 0;
	record r[MAX];
	for (int i = 0; i < MAX; i++){
		cout << "\n Input name: " << endl;
		cin >> r[i].name;
		r[i].score = count1;
	}
	ofstream outfile;
	outfile.open("1.txt", ios_base::app);
	for (int i = 0; i < MAX; i++)
		outfile << r[i].name << " " << r[i].score << endl;
	outfile.close();
}
