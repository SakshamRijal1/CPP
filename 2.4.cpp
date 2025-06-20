#include<iostream>
#include<iomanip>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void inputPersonDetails() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;
    float marks[3]; // For 3 subjects
    float average;
    char grade;

public:
    void inputStudentDetails() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        inputPersonDetails();

        cout << "Enter marks for 3 subjects:\n";
        for(int i = 0; i < 3; ++i) {
            cout << "Subject " << i+1 << ": ";
            cin >> marks[i];
        }

        calculateGrade();
    }

    void calculateGrade() {
        float sum = 0;
        for(int i = 0; i < 3; ++i)
            sum += marks[i];

        average = sum / 3;

        if(average >= 90)
            grade = 'A';
        else if(average >= 75)
            grade = 'B';
        else if(average >= 60)
            grade = 'C';
        else if(average >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void displayReportCard() {
        cout << "\n----- Report Card -----\n";
        displayPersonDetails();
        cout << "Roll No: " << rollNo << endl;
        cout << fixed << setprecision(2);
        for(int i = 0; i < 3; ++i)
            cout << "Subject " << i+1 << " Marks: " << marks[i] << endl;

        cout << "Average: " << average << endl;
        cout << "Grade: " << grade << endl;
        cout << "------------------------\n";
    }
};

// Main function with a basic menu
int main() {
    Student s;
    int choice;

    do {
        cout << "\n--- Student Report Card System ---\n";
        cout << "1. Enter Student Details\n";
        cout << "2. Display Report Card\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                s.inputStudentDetails();
                break;
            case 2:
                s.displayReportCard();
                break;
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while(choice != 3);

    return 0;
}
