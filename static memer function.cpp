#include <iostream>

using namespace std;

class alpha
{
    private:
    int a;
    int b;
    public :
    alpha()
    {
        a = 5;
        b= 5;
        
    }
    static int stat;
    
    static int getstat()
    {
        stat++;
        return stat;
    }
};

int alpha::stat = 0;

int main()
{
    alpha a1;
    cout<<"value using object = "<<a1.getstat()<<endl;
    cout<<"value using class = "<<alpha::getstat()<<endl;
    return 0;
}
