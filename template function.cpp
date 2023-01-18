#include <iostream>
#include <string>
using namespace std;

template <class t>
t sum(t x , t y)
{
    return x+y;
}

int main()
{
    cout<<sum<int>(9 , 0)<<endl;
    cout<<sum<double>(9.4 , 0.9)<<endl;
    cout<<sum<float>(9.5f , 4.8f)<<endl;
    cout<<sum<string>("onepunch" , " man")<<endl;
    return 0;
}
