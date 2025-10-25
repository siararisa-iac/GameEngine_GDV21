#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void multiplyByTwo(int& x)
{
    x *= 2;
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