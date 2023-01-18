#include <iostream>

using namespace std;

int main()
{
	int marks;
	cout<<"enter your marks"<<endl;
	cin>> marks;
	
	if(marks>=60 && marks<=100)
	{
		cout<<"you passed";
	}
	else if (marks<=60 && marks>=0)
	{
		cout<<"you failed";
	}
	else {
		cout<<"invalid input";
	}
	return 0;
}

