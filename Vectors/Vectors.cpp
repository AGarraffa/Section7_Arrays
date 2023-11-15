#include <iostream>
#include <vector> // this allows use of vectors.

using namespace std;

int main() {

	vector <char> vowels (5); // a vector named vowels of the char type that is 5 elements long.

	vector <int> testScores(10); // a vector named testScores of the int type that is 10 elements long. Each element is set to 0 by default for int types.

	vector <char> letters { 'a', 'e', 'i', 'o', 'u' }; // sets and initializes the vector.

	vector <double> hiTemps(365, 80.0); // this creates a vector hiTemps with 365 elements and each element is initialized to 80.0.

	return 0;
}