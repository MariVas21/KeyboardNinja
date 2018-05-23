#include <conio.h>
#include <fstream>
#include <time.h>
 
int main()
{
	setlocale(LC_ALL, "Russian");
    FILE *f1=fopen("C:\\Users\\User\\Documents\\dev cpp\\kursworktrpo\\1.txt","r"); 
    FILE *f2=fopen("C:\\Users\\User\\Documents\\dev cpp\\kursworktrpo\\2.txt","r");
    FILE *f3=fopen("C:\\Users\\User\\Documents\\dev cpp\\kursworktrpo\\3.txt","r");
    srand(time(NULL));
    int c,k;
	k = rand() % 3;
	if(k == 0){
	
    while( (c = getc(f1)) != EOF)
    printf("%c", c);
    fclose(f1);}
    
    	if(k == 1){
	
    while( (c = getc(f2)) != EOF)
    printf("%c", c);
    fclose(f2);}
    
    	if(k == 2){
	
    while( (c = getc(f3)) != EOF)
    printf("%c", c);
    fclose(f3);}
    _getch();
    return 0;
}
