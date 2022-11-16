#include "../kit/mymath.h"
#include <iostream>
using namespace std;


int main()
{
	int a = 1, b= 2;
	mymath* m = new mymath();
	int c = m->add(a,b);
	cout << "c=" << c << endl;

	return 0;
}
