   //   Write a C++ Program to find number is even or odd using function.

#include <iostream>
using namespace std;

void fun(int x = 0);

int main()
{
int num = 0;

cout << "enter a no" << endl;
cin >> num;

fun(num);
return 0;
}

void fun(int x)
{
if (x % 2 == 0)
cout << "Even";
else
cout << "Odd";
}
