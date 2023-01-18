#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream fout;
  fout.open("my.text", ios::app);
  int pos;
  pos = fout.tellp();
  fout<<"the pointer is at "<<pos<<endl;
  pos = fout.tellp();
  fout<<"the pointer after writing "<<pos;
  fout.close();
  
   return 0;
  
}
