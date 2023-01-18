#include <iostream>
#include <string>

using namespace std;

struct student 
{
    string fname;
    int rollno;
    int marks;
};

int main()
{
     struct student svar;
     
     cout<<"enter your name"<<endl;
     getline (cin, svar.fname);
     
     cout<<"enter roll no."<<endl;
     cin>>svar.rollno;
     
     cout<<"enter marks"<<endl;
     cin>>svar.marks;
     
     cout<<"Full Name = "<<svar.fname<<endl;
     cout<<"Marks = "<<svar.marks<<endl;
     cout<<"rollno. = "<<svar.rollno<<endl;
     
    return 0;
}
