#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numSemester;
    int numSubject;

    cout << "How many semesters you had? ";
    cin >> numSemester;

    for (int i = 0; i < numSemester; i++) {
        cout << "For semester " << i + 1 << ":\n";
        cout << "How many subjects you had? ";
        cin >> numSubject;

        vector<float> credits(numSubject), grades(numSubject);
        float totalCredits = 0;
        float weightedSum = 0;

        for (int j = 0; j < numSubject; j++) {
            cout << "Enter credit for subject " << j + 1 << ": ";
            cin >> credits[j];

            cout << "Enter grade for subject " << j + 1 << ": ";
            cin >> grades[j];

            totalCredits += credits[j];
            weightedSum += credits[j] * grades[j];
        }

        float CGPA = weightedSum / totalCredits;
        cout << "Your CGPA for semester " << i + 1 << " is: " << CGPA << endl;
    }

    return 0;
}
