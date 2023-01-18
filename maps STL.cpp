#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    std::map<int,string>map1; //declaration
    
    std::map<int , string>map2 = { {12, "naruto"}, {13, "sasuke"}, {14, "kakasi"} };
    
    //methods
    
    map2[13]= "might_guy" ; //insert 
    
    //check
    for(map<int , string>::iterator i=map2.begin() ; i !=map2.end(); i++)
    {
        cout<<i->first<< " "; //for printing map key
        cout<<i->second<< " "<<endl; // for printing string values 
    }
    cout<<endl;
    //at 
    cout<< "value at 12 - " << map2.at(12)<<endl; //safe
    //[]
    cout<<"value at 12 - "<<map2[12]<<endl; //unsafe
    
    // change values
    map2.at(12)= "hinata";
    cout<< "value at 12 - " << map2.at(12)<<endl; //safe
    //insert - inserts (key,value) at particular location as map is sorted
    map2.insert(pair<int, string>(11, "pervy_sage"));
    map2.insert(make_pair(15, "madara"));
      //check
    for(map<int , string>::iterator i=map2.begin() ; i !=map2.end(); i++)
    {
        cout<<i->first<< " "; //for printing map key
        cout<<i->second<< " "<<endl; // for printing string values 
    }
    cout<<endl;
    return 0;
}
