#include <iostream>
#include <format>
using namespace std;

int main() {

	double a{};

	cout << "Please, enter a positive number between 1 and 100. The program will calculate if greater than, less than or equal to 50"<<endl;
	cout << "Please, enter your number: ";
	cin >> a;

	if (a >= 1 && a <= 100) {

		if (a < 50) {
			cout << format("{} is less than 50", a);
		}
		else if (a > 50) {
			cout << format("{} is greater than 50", a);
		}
		else if (a == 50) {
			cout << format("{} is equal to 50", a);
		}

	}

	else {
		cout << "The number is out out of the range. Try again.";
	}

	return 0;
}