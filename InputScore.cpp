#include<fstream>
#include <conio.h>
#include <iostream>
#include <string>
#include "ScoreM.h"

using namespace std;


int InputScore(int count){
	setlocale(LC_ALL, "Russian");
	system ("cls");
	struct Record {char name[20]; int score;} Re;
	FILE *tf;
	Record rec[20];
	int  i=0;
	tf=fopen("file1.txt","a+"); 
while (i<1)

{
 cout<<"\n ¬ведите свое им€:\n "; 
cin>>Re.name;
Re.score=count;
fwrite(&Re,sizeof(Re),1,tf);
fclose(tf);
i++;
}
ScoreM();
system ("PAUSE >> NULL");
}
