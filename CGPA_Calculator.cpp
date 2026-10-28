#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cout << "कोर्सेसची एकूण संख्या प्रविष्ट करा: ";
    cin >> n;

    vector<string> courseNames(n);
    vector<double> grades(n);
    vector<double> credits(n);

    double totalGradePoints = 0;
    double totalCredits = 0;

    for(int i = 0; i < n; i++) 
{
        cout << "\nकोर्स " << i + 1 << " चे नाव: ";
        cin >> courseNames[i];
        cout << "ग्रेड पॉईंट (उदा. 0-10) प्रविष्ट करा: ";
        cin >> grades[i];
        cout << "क्रेडिट आवर्स (Credit Hours) प्रविष्ट करा: ";
        cin >> credits[i];

        totalGradePoints += (grades[i] * credits[i]);
        totalCredits += credits[i];
    }

    double cgpa = (totalCredits > 0) ? (totalGradePoints / totalCredits) : 0;

    cout << "\n--- निकाल (Results) ---\n";
    for(int i = 0; i < n; i++) 
{
        cout << "कोर्स: " << courseNames[i] << " | ग्रेड पॉईंट: " << grades[i] << " | क्रेडिट्स: " << credits[i] << "\n";
    }
    
    cout << "\nएकूण क्रेडिट्स: " << totalCredits;
    cout << "\nफायनल CGPA: " << cgpa << endl;

    return 0;
}