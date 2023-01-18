#include <iostream>
using namespace std;
 int MAX = 5;

void printarray(int *ptr);
int main()
{

int arr[5] = {2, 3, 4, 5, 8};

printarray(arr);

return 0;
}

void printarray (int *ptr)
{
	for (int i=0; i<MAX; i++)
	{
		cout<<*ptr++<<endl;
	}
}

// abhove and below codes will yeild the same output


/* #include <iostream>
using namespace std;
 int MAX = 5;

void printarray(int *ptr)
{
	for (int i=0; i<MAX; i++)
	{
		cout<<*ptr++<<endl;
	}
}
int main()
{

int arr[5] = {2, 3, 4, 5, 8};

printarray(arr);

return 0;
}  */
