#include <iostream>
#include <string>
using namespace std;

template <class t>
class sum
{
    private:
    t x;
    t y;
    public:
    sum (t arg1 , t arg2) //constructor
    {
        x=arg1;
        y=arg2;
    }
    void getsum()
    {
        cout<<x + y<<endl;
    }
};

int main()
{
    sum<int>obj1(3 , 5);
     sum<float>obj2(3.8f , 5.0f);
     sum<string>obj3("sexy" , " jutsu");
     
     obj1.getsum();
     obj2.getsum();
     obj3.getsum();
     
   return 0;  
}
