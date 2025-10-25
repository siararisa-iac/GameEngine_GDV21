#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void multiplyByTwo(int& x)
{
    x *= 2;
}

string RandomCodeGenerator()
{
	srand((unsigned)time(0));
	int length = rand() % 11;

	string code;

	for (int i = 0; i < length; i++)
	{
		int charType = rand() % 3;
		if (charType == 0)
		{
			code += 'A' + rand() % 26;
		}
		else if (charType == 1)
		{
			code += 'a' + rand() % 26;
		}
		else
		{
			code += '0' + rand() % 10;
		}
	}
	return code;
}

int main() {
    int x;
    cout << "Give me a number: ";
    cin >> x;

    multiplyByTwo(x);
    cout << "That number multiplied by two is " << x << endl;

	string text = "hello world im gay";
    string printable =
        "0123456789abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        " !\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
    string temp = "";

    for (char ch : text) {
        for (char i : printable) {
            this_thread::sleep_for(chrono::milliseconds(20));
            cout << temp + i << endl;

            if (i == ch) {
                temp += ch;
                break;
            }
        }
    }

    cout << "Nice changes." << endl;
}