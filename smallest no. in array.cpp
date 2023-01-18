#include <iostream>

using namespace std;

int main()
{
    
  int arr[4] = {0};
  
  for( int i=0;i<4;i++)
  {
      cout<<"input array no. "<<i<<":";
      cin>>arr[i];
  }
  
   int min = arr[0];
   for (int i=1;i<4;i++)
   {
       if(min>arr[i])
       {
         min = arr[i];  
       }
       
       cout << "min value is" << min<<endl;
   }
    return 0;
}

