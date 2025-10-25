#include <iostream>
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
	string text = "hello world, who says im gay";
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