// using new operartor to allocate memory in heap

#include <iostream>

using namespace std;

class test
{
    private:
     int data;
     
     public:
     void setdata (int set)
     {
         data = set;
     }
     
     int getdata ()
     {
         return data;
     }
     
};

int main()
{
    test *ptr = new test;
    
    ptr-> setdata(10);
    
   cout<<"vaue is "<< ptr-> getdata();

    return 0;
}
