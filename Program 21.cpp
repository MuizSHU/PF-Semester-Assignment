#include <iostream>
#include <string>
using namespace std;

// Define the structure to store student information
struct Student {
    int studentID;
    string studentName;
    float GPA;
    int marks[7];  // Array of 7 marks
};

// Global structure variable for student 1
Student student1 = {101, "John Doe", 3.75, {85, 90, 88, 92, 78, 89, 91}};

// Function to print student information
void printStudentData(Student s1, Student s2) {
    cout << "Student 1:" << endl;
    cout << "ID: " << s1.studentID << endl;
    cout << "Name: " << s1.studentName << endl;
    cout << "GPA: " << s1.GPA << endl;
    cout << "Marks: ";
    for (int i = 0; i < 7; i++) {
        cout << s1.marks[i] << " ";
    }
    cout << endl << endl;

    cout << "Student 2:" << endl;
    cout << "ID: " << s2.studentID << endl;
    cout << "Name: " << s2.studentName << endl;
    cout << "GPA: " << s2.GPA << endl;
    cout << "Marks: ";
    for (int i = 0; i < 7; i++) {
        cout << s2.marks[i] << " ";
    }
    cout << endl;
}

int main() {
    // Local structure variable for student 2
    Student student2 = {102, "Jane Smith", 3.90, {92, 88, 94, 90, 85, 87, 91}};
    
    // Pass both students' data to the UDF to print
    printStudentData(student1, student2);

    return 0;
}
