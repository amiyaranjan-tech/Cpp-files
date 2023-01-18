#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    char A[8] = "Amiya";
    
    fout.open("my.text", ios::in);
   
    fout.seekp(3, ios_base::beg);
    fout.write (A , 8);
    
    
    fout.close();
    return 0;
    
}

