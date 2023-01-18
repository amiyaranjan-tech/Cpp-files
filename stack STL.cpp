#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int>stack1;  //declaration
    
    //push values in stack
    
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    //top
    cout<< "top elemment "<<stack1.top()<<endl;
    //pop
    stack1.pop();
    cout<<"new top "<<stack1.top()<<endl;
    //size of stack
    cout<<"size of stack "<<stack1.size()<<endl;
    return 0;
}
