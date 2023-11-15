#include <iostream>

using namespace std;

int main() {

	// int arr[3][4]; this array has 3 rows and 4 columns

	const int rows{ 3 };
	const int cols{ 4 };
	int movieRating[rows][cols]{};

	cin >> movieRating[1][2];
	cout << movieRating[1][2] << endl;


	int init[3][4]
	{
		{0, 4, 3, 5},
		{2, 3, 3, 5},
		{1, 4, 4, 5}
	}; // this initializes each elemnt of the 2D array

	cout << init[1][2];

	return 0;
}