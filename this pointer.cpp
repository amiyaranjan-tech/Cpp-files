#include <iostream>
#include <string>

using namespace std;

class person 
{
    private:
    int  age;
    string name;
    
    public:
    
        person(int age , string  name)
        {
            this->age = age;
            this->name = name;
        }
        
        void printvalue()
        {
            cout<<"age = "<<age<<endl;
            cout<<"name = "<<name<<endl;
        }
};

int main()
{
   person a(45, "jon");
   
   a.printvalue();

    return 0;
}

