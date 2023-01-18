#include <iostream>
#include <string>

using namespace std;

void add (int , int);
void add (string, string);

int main()
{
   add (3,7);
   add ( "AMIYA " , "EARTH");

    return 0;
}

void add ( int x , int y)
{
    cout<<"sum is "<<x+y<<endl;
    
}

 void add (string x , string y)
 {
     cout<<x + y<<endl;
 }
