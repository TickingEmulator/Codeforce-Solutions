#include <iostream>
using namespace std;

int main() {
	int n;
	int X = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		if (input == "X++" || input == "++X") {
			X += 1;
		}
		else{
			X -= 1;
		}
	}
	cout << X;
}
