#include <iostream>

using namespace std;

int main() {

	char vowels[]{ 'a', 'e', 'i', 'o', 'u' };

	cout << "\nThe first vowel in the array is " << vowels[0];
	cout << "\nThe last vowel in the array is " << vowels[4] << endl;
	//cin >> vowels[5]; this is out of bounds and can cause a crash.

	double hiTemps[]{ 90.1, 89.8, 77.5, 81.6 };
	cout << "\nThe first high temperatures is " << hiTemps[0];
	hiTemps[0] = 100.7;
	cout << "\nThe new high temperatures is " << hiTemps[0] << endl;

	int testScores[5]{};
	cout << "Enter 5 test scores\n";
	cin >> testScores[0] >> testScores[1] >> testScores[2] >> testScores[3] >> testScores[4];

	cout << "\n The test scores are: \n";
	for (int i = 0; i < 5; i++) {
		cout << testScores[i] << endl;
	}

	return 0;
}