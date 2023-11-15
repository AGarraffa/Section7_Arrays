#include <iostream>
using namespace std;

int main() {

	int testScores[5]; // this declares an array named testScores with 5 elements

	int newTests[5]{ 65, 90, 82, 100, 88 }; // this declares the array and initializes values.

	int highScores[10]{ 3, 5 }; // this declares the array and sets the first two elements, with the remaining being set to 0. 

	const int daysPerYear{ 365 };
	int hiTemperatures[daysPerYear]{}; // this creates the array hiTemperatures and sets the size to the variable daysPerYear. It also initializes every value to 0.

	int another_array[]{ 1, 2, 3, 4, 5 }; // this declares the array but doesn't set the size. The size is determined by the initial values. 

	cout << "The first index in newTests is: " << newTests[0] << endl;

	cin >> testScores[0];
	cin >> testScores[1];
	cin >> testScores[2]; // this allows the user to input specific elements of an array.

	return 0;
}