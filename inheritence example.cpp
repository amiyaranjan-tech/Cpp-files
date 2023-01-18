#include <iostream>

using namespace std;

class rectangle 
{
    public:
    int length;
    int breadth;
    


void area ()
{
    cout<<"Area of rectangle "<<length * breadth<<endl;
}
};

class cuboid : public rectangle  //cuboid is derived and rectangle is base class
{
    public:
    int height;
    
    void volume()
    {
        cout<<"Volume of cuboid is "<<length*breadth*height<<endl;
    }
};

int main()
{
    cuboid c;
    c.length = 10;
    c.breadth = 20;
    c.height = 30;
    
    c.area();
    c.volume();

    return 0;
}

