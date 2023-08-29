#include <iostream>
#include <cctype> 
#include <algorithm>
using namespace std;

int main() {
	string input;
	cin >> input;
	int uppercase = count_if(input.begin(), input.end(), ::isupper);
	int lowercase = input.length() - uppercase; 
	if (uppercase > lowercase) {
		std::transform(input.begin(), input.end(), input.begin(), ::toupper);
	}
	else {
		std::transform(input.begin(), input.end(), input.begin(), ::tolower);
	}
	cout << input;
}
