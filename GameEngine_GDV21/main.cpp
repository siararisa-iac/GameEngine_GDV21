#include <iostream>
using namespace std;

int multiplyByTwo(int x)
{
	return (x * 2);
}

int main() {
	cout << "Hello World~" << endl;
	cout << "I miss my wife Tails." << endl;


	int x;
	cout << "Give me a number: ";
	cin >> x;

	int y = multiplyByTwo(x);
	cout << "That number multiplied by two is " << y;
}