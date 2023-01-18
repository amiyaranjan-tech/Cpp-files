#include <iostream>
using namespace std;
class lpu
{
private:
    char name[20];
    int roll;

public:
    lpu();  // Constructor
    ~lpu(); // Destructor
    void read();
    void disp();
};
lpu ::lpu()
{
    cout << "This is Student Details" << endl;
}
void lpu ::read()
{
    cout << "Enter the student Name";
    cin >> name;
    cout << "Enter the student roll no ";
    cin >> roll;
}
void lpu ::disp()
{
    cout <<"Student Name :"<< name << endl;
    cout <<"Roll no is :"<< roll << endl;
}
lpu :: ~lpu()
{
    cout <<"Student Detail is Closed";
}

int main()
{
    lpu s;
    s.read();
    s.disp();
}