#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string input;
	cin >> input;
	input[0] = std::toupper(input[0]);
	cout << input;
}
