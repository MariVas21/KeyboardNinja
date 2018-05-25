#include <ctime>
#include <fstream>


using namespace std;
 
void ScoreM()
{
	 FILE *f = fopen("file1.txt", "a+");
  time_t rawtime;
  struct tm * timeinfo;
  char buffer [80];                               
  time ( &rawtime );                               
  timeinfo = localtime ( &rawtime );               
 
  strftime (buffer,80," %I:%M%p",timeinfo); 
  fprintf(f, "%s", buffer);
  fclose(f);
}
