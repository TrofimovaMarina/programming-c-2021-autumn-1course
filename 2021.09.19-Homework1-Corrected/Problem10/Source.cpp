#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0; 
	int x = 0;
	int sgn_x = 0;

	cin >> a;
	cin >> b;

	x = a - b;

	sgn_x = 2 * (((x * x + x + 1)) / (x * x + 1)) - 1; //1, if x>=0, -1, if x<0

	//cout << sgn_x << endl;
	cout << (a + b + x * sgn_x)/2 << endl;


	return EXIT_SUCCESS;
}