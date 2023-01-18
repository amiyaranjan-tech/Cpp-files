#include <iostream>

using namespace std;

int main()
{
    
    int arr[5] = {2 , 3 ,4 , 5, 6 };
    
    int *ptr = arr ; // int *ptr = &arr[0]; (will also do the ame thing)
    
    for(int i = 0; i<5 ; i++)
    {
        cout<<"value at "<<i<<"is "<< *(ptr + i )<<endl;
        
    }

    return 0;
}
