#include <iostream>

using namespace std;

class A 
{
    private :
    int weight;
    public :
    A (int x = 0) // constructor overloading is done here thats why no default(non-parametrized) constructor is used
    {
       weight = x; 
    }
    
    void printvalue()
{
    cout<<"weight is "<<weight<<endl;
}

A operator+ (A s)   // syntax of operator overloading   s is nothing but an object
{
    A temp;  // temp is nothing but an object
    temp.weight = weight + s.weight;  
    return temp;
}
};

int main()
{
    A person1(89);
    A person2(76);
    A total;
    total = person1 + person2;
    
    total.printvalue();

    return 0;
}

