#include<fstream>
#include <conio.h>
#include <iostream>
#include <string>

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
 cout<<"\n ������� ���� ���:\n "; 
cin>>Re.name;
Re.score=count;


fwrite(&Re,sizeof(Re),1,tf);
fclose(tf);
i++;
}
tf=fopen("file1.txt","rb"); // �������� ��������� ����� ��� ������
fread(&Re,sizeof(Re),1,tf); // ������ �� ����� ����� ��������� Re

while (!feof(tf))
{ printf("%10s %4d \n",Re.name,Re.score);
fread(&Re,sizeof(Re),1,tf);
}
system ("PAUSE >> NULL");
}