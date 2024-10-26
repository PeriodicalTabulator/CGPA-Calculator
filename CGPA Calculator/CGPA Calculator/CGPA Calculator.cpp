
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int numSubject;
	int numSemester;
	cout << "How many semesters you had? ";
	cin >> numSemester;
	cout << "How many subjects you had? ";
	cin >> numSubject;
	vector<float> credits(numSubject), grades(numSubject);
	float totalCredits = 0;
	float weightedSum = 0;
	for (int i = 0; i < numSubject; i++) {
		cout << "Enter credit for subject " << i + 1 << ": ";
		cin >> credits[i];
		cout << "Enter grade for subject " << i + 1 << ": ";
		cin >> grades[i];
		totalCredits += credits[i];
		weightedSum += credits[i] * grades[i];
	}
	float CGPA = weightedSum / totalCredits;
	cout << "Your CGPA is: " << CGPA << endl;
	return 0;
}