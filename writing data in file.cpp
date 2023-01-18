#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("my.text");
	fout<<"JAI-SHRI-RAM";
	fout.close();
	return 0;
}
