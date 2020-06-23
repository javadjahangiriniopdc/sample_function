

#include <iostream>
using namespace std;

//function prototype
int MaxNumber(int x, int y) {
	int max;
	if (x > y)
		max = x;
	else
		max = y;

	return max;
}

int main()
{
	int m;
	int a, b;
	cin >> a >> b;
	m = MaxNumber(a, b);
	cout << "max a,b=" << m << endl;
   
}
