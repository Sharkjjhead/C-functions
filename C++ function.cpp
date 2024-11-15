#include <iostream>
using namespace std;
void Takesthanksgiving();
void box();
void turkey();
int main() {

	Takesthanksgiving();
	box();
	turkey();
}
void Takesthanksgiving() {
	int answer;
	cout << "how many people are coming to Takes/thanksgiving" << endl;
	cin >> answer;

	if (answer < 4)
		cout << "nice and cozy" << endl;
	else if (answer <= 10)
		cout << "better get a big turkey" << endl;
	else if (answer >= 10)
		cout << "hope your not doing the dishes" << endl;
}
void box() {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
void turkey() {
	string choice = " ";
	while (choice != "f") {
		cout << "Heres some more turkey/type f when full" << endl;
		cin >> choice;
		if (choice == "f") {
			cout << "your full" << endl;
		}
	}
}