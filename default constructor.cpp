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
    
    
    void getdata()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<height<<"ft"<<endl;
    }
    
};

int main()
{
    person obj;
    
    obj.getdata();

    return 0;
}
