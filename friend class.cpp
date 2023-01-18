#include <iostream>
#include <string>

using namespace std;

class alpha
{
    private :
    int a1;
    public:
    alpha(int arg = 0)
    {
        a1 = arg;
    }
    friend class beta;
};

class beta
{
    private :
    int b1;
    public:
    beta(int arg = 0)
    {
        b1 = arg;
    }
    
    int sum()
    {
        alpha a(4);
        int sum = a.a1 + b1;
        return sum;
    }
};

int main()
{
    beta b(2);
    
    cout<<"sum is "<<b.sum()<<endl;
    return 0;
}
