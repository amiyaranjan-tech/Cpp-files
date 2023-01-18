#include <iostream>
#include <string>

using namespace std;

class person

{
    private:
    string name;
     int age;
    int height;
    
    public:
    person()     //default constructor
    {
        name = "Null";
        age = 0;
        height = 0; 
    }
    
    person(string name_a , int age_a , float height_a)     // parametrizd constructor
    {
    	name = name_a;
    	age = age_a;
    	height = height_a;
	}
	
	person(person &obj_2)    // copy constructor
	{
	    name = obj_2.name;
    	age = obj_2.age;
    	height = obj_2.height;
	}
    
    
    void getdata()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<height<<"ft"<<endl;
    }
    
};

int main()
{
    person obj , obj_2("Vishnu", 00 , 9), obj_3(obj_2);
    
    obj.getdata();
    obj_2.getdata();
    obj_3.getdata();

    return 0;
}
