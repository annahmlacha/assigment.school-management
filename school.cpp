#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Student class to store student details
class Student {
public:
    string name;
    int rollNumber;
    char grade;
    int age;
    int registration number;
    string gender;


    // Constructor to initialize a student
    Student(string name, int rollNumber, char grade) {
        this->name = name;
        this->rollNumber = rollNumber;
        this->grade = grade;
        
    }

    // Function to display student details
    void displayDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
    }
};

// SchoolManagement class to handle students' operations
class SchoolManagement {
private:
    vector<Student> students;

public:
    // Function to add a student
    void addStudent() {
        string name;
        int rollNumber;
        char grade;
        int registration number;
        string gender;

        cout << "Enter student's name: ";
        cin.ignore();  // to clear the input buffer
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter grade: ";
        cin >> grade;

        // Create a new student and add to the list
        Student newStudent(name, rollNumber, grade);
        students.push_back(newStudent);

        cout << "Student added successfully!" << endl;
    }

    // Function to display all students
    void displayStudents() {
        if (students.empty()) {
            cout << "No students in the record!" << endl;
            return;
        }

        cout << "\n--- Student Records ---" << endl;
        for (const auto& student : students) {
            student.displayDetails();
            cout << "------------------------" << endl;
        }
    }
};

int main() {
    SchoolManagement sm;
    int choice;

    while (true) {
        cout << "\nSchool Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cout << "Enter your age:";
        cout << "Enter your registration number:";
        cout << "Enter your gender:";
        cin >> choice;

        switch (choice) {
        case 1:
            sm.addStudent();
            break;
        case 2:
            sm.displayStudents();
            break;
        case 3:
            cout << "Exiting program. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
