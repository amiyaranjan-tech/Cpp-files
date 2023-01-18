#include <iostream>
#include <array>
using namespace std;

int main()
{
    std::array<int, 3>arr1;  
    std::array<int, 3>arr2 = {4,6,8};
    
    //methods
    cout<< "at "<<arr2.at(2)<<endl; // out of und safe
    cout<< "[ ] "<<arr2[2]<<endl;   // out of bound unsafe
    cout<<"front() "<<arr2.front()<<endl; //return 1st element
    cout<<"back() "<<arr2.back()<<endl; // return last element
    arr1.fill(10);                       // fill arry with 10
    arr1.swap(arr2); // swap the arrays
    arr1.empty();       // empty the array
    cout<<"size() "<<arr2.size()<<endl;  // tells size of array filled
    cout<<"max_size() "<<arr2.max_size()<<endl; // tells max size of array
    return 0;
}
