#include <iostream>
#include <string>

using namespace std;

int main()
{
   int num1 = 0, num2 =0, total = 0;
   cout<<"enter 2 no.s "<<endl;
   cin>>num1>>num2;
   try
   {
     if (num2 == 0)
     {
         throw num2;
     }
     else 
     {
   total = num1/num2;
   cout<<"output is "<<total<<endl;
     }
   
   }
   catch ( ... )
   {
       cout<<"error occured"<<endl;
   }
   
    return 0;
}

