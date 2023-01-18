#include <iostream>
#include <string>
using namespace std;
 
 class base
 {
     public :
      virtual void show()=0;
    
 };
 
 class drv1 : public base 
 {
     public :
     void show()
     {
         cout<<"drv1 class"<<endl;
     }
 };
 
 class drv2 : public base 
 {
     public :
     void show()
     {
         cout<<"drv2 class"<<endl;
     }
 };
 
 int main()
     {
         base *ptr;
         
         ptr = new drv1();
         
         ptr->show();
         
         ptr = new drv2();
         
         ptr->show();
         
         return 0;
     }
