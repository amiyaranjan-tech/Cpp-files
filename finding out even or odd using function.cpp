#include <iostream>

using namespace std;

int fun ( int x = 0);

int main()
{
    
    int num= 0 ;
    cout<<"enter a no. ";
    cin>>num;
    fun (num);

    return 0;
}

int fun (int x)
{
    if(x % 2 == 0)
     cout<<"even"<<endl;
     else 
     cout<<"odd"<<endl;
     return x;
}
