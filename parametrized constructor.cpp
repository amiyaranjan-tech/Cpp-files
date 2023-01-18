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
    person()
    {
        name = "Null";
        age = 0;
        height = 0; 
    }
    
    person(string name_a , int age_a , float height_a)
    {
    	name = name_a;
    	age = age_a;
    	height = height_a;
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
    person obj , obj_2("Vishnu", 00 , 9);
    
    obj.getdata();
    obj_2.getdata();

    return 0;
}
