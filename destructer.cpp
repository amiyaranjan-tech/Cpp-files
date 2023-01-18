#include <iostream>
#include <string>

using namespace std;

class Test 
{
    private :
    int *age;
    
  public:  
  Test()
  {     age = new int();  // new is used for allocating memory to a pointer
      *age = 0;
      cout<<"NP-constructor"<<endl;
  }
    Test(int x)
  {     age = new int();
      *age = x;
      cout<<"P-constructor"<<endl;
  }
  ~Test()
  {
      delete age;
      cout<<"destructer"<<endl;    // destructer can only delete pointer so we make variable a pointer if we want to delete it
      
  }
};

int main()
{
    Test obj1;
    Test obj2(10);
    return 0;
}
