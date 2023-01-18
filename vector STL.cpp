#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //declaration of vector
    std::vector<int> testvector1;
    cout<<"size "<< testvector1.size()<<endl;
    
    //declaration and initialization
    std::vector<int> testvector2 = {10,20,30};
    
    //methods
    cout<< "at " << testvector2.at(2) << endl; // out of bound safe
    cout<< "[] " << testvector2[2] << endl; // out of bound unsafe
    testvector2.push_back(40);//inserting an element at the end of vector
    testvector2.push_back(50);
    testvector2.push_back(60);
    //iterator is pointer to container 
    for(vector<int>::iterator i = testvector2.begin(); i != testvector2.end(); i++)
    {
        cout <<*i << " "; //for printing the vector
    }
    cout<<endl;
    
    //insert = to insert an element in vector before the position pointed by iterator
    vector<int>::iterator i = testvector2.begin();
    testvector2.insert(i, 0);
      //checking insert
      for(vector<int>::iterator i = testvector2.begin(); i != testvector2.end(); i++)
    {
        cout <<*i << " "; //for printing the vector
    }
    cout<<endl;
   
    //pop_back = removes the last element from vector
     testvector2.pop_back();
     //checking pop_back
      for(vector<int>::iterator i = testvector2.begin(); i != testvector2.end(); i++)
    {
        cout <<*i << " "; //for printing the vector
    }
    
    //erase = removes the element pointed by the iterator
    //vector<int>::iterator i = testvector2.begin();
    //testvector2.erase(i);
    
    /* erase all elememt except the last one 
    testvector2.erase(testvector2.begin(), testvector2.end() - 1); */
    
    // swapping of vectors 
    testvector2.swap(testvector1); 
    
    //capacity of vector = no. of elements can be entered based on memory allocation
    cout<< endl<< "capacity " << testvector2.capacity() << endl;
   return 0;
}

