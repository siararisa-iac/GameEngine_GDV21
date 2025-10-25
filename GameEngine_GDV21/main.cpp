#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int multiplyByTwo(int x)
{
	return (x * 2);
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

    int y = multiplyByTwo(x);
    cout << "That number multiplied by two is " << y << endl;

	cout << "\n\nGenerating random code...\n";
	string code = RandomCodeGenerator();
	cout << "Your random code is: " << code << "\n\n";

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
}