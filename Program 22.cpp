#include <iostream>
#include <string>
using namespace std;

// Define the structure to store student information
struct Student {
    int studentID;
    string studentName;
    float GPA;
    float percentage;
    int marks[5];  // Array of 5 marks
};

// UDF to take student input and calculate the total of marks
int calculateTotal(Student &s) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += s.marks[i];
    }
    return total;
}

int main() {
    // Create a Student structure to store the student's record
    Student student;

    // Take student input
    cout << "Enter student ID: ";
    cin >> student.studentID;
    cin.ignore();  // To ignore the newline character left by cin >> studentID

    cout << "Enter student name: ";
    getline(cin, student.studentName);

    cout << "Enter student GPA: ";
    cin >> student.GPA;

    cout << "Enter student percentage: ";
    cin >> student.percentage;

    cout << "Enter 5 marks for the student: ";
    for (int i = 0; i < 5; i++) {
        cin >> student.marks[i];
    }

    // Call UDF to calculate the total marks and get the result
    int totalMarks = calculateTotal(student);

    // Print the total marks
    cout << "Total marks of the student: " << totalMarks << endl;

    return 0;
}
