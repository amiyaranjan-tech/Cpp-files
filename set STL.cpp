#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int>set1 = {10, 20, 30,10 ,40 ,20};
    
    for(set<int>::iterator nandy = set1.begin() ; nandy != set1.end(); nandy++ ) //iterator 
    {
        cout<< *nandy << " " ;
    }
    cout<<endl;
    
    //insert 
    set1.insert(70);
    set1.insert(80);
    set1.insert(90);
    
    for(set<int>::iterator amiya = set1.begin() ; amiya != set1.end(); amiya++ ) // iterator 
    {
        cout<< *amiya << " " ;
    }
    cout<<endl;
    
  return 0;  
}
