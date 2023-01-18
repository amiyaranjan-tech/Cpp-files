#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int>set1;
    unordered_set<int>set2= {1, 2 ,1, 2 ,3 ,4 ,5};
    
    
    for(unordered_set<int>::iterator i = set2.begin(); i != set2.end(); i++ )
    {
        cout<< *i << " ";
    }
    cout<<endl;
    
    //insert
    
    set2.insert(7);
    
    //erase
    unordered_set<int>::iterator del = set2.begin();
    set2.erase(del); //by iteration
    
    set2.erase(2); //by value
    
    set2.erase( set2.begin(), set2.find(3)); //by range
    
     for(unordered_set<int>::iterator i = set2.begin(); i != set2.end(); i++ )
    {
        cout<< *i << " ";
    }
    cout<<endl;
    
    set1.swap(set2); //swapping
    
    cout<<"size of set1 "<< set1.size()<<endl;
    cout<<"size of set2 "<< set2.size()<<endl;
    return 0;
}
