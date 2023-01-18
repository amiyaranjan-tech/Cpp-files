#include <iostream>

using namespace std;

class house
{
    private :
    int length = 0, breadth = 0;  // variables are not made public generally thats why we use set data function in class
    
    public:
    void setdata (int x , int y)   //its public so that we may call it in main function while creating object 
                                         // this is syntax of a function (nothing new)
    {
     length = x; 
     breadth = y;                   // setdata is nothing just a function name we can change it with any other name 
    }
    
    void area ()
    {cout<<"Area is "<<length * breadth<<" sqr-km"<<endl;}
};

int main()
{
   house zeus;
   zeus.setdata (400 , 400); // house is class name
   zeus.area();
   
     house vaikunth;
   vaikunth.setdata (4000 , 4000);   // zeus and vaikunth are object
   vaikunth.area();
   
   return 0;
}

