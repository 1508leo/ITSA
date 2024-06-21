// English -> Sorting -> 24.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=36892
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Store information of students
struct Student {
    int number;
    string name;
    int grade;
    int rank;
};

int main() {
    vector<Student> students;
    int number, grade;
    string name;

    // Input for 6 students
    for (int i = 0; i < 6; i++) {
        cin >> number >> name >> grade;

        // Construct the Student object and store data
        Student student;
        student.number = number;
        student.name = name;
        student.grade = grade;
        student.rank = 0;

        students.push_back(student);
    }

    // Rank the students based on their grades
    for (int i = 0; i < students.size(); i++) {
        students[i].rank = 1; // Start rank from 1
        for (int j = 0; j < students.size(); j++) {
            if (students[i].grade < students[j].grade) {
                students[i].rank++;
            }
        }
    }

    // Print the results
    for (int i = 0; i < students.size(); i++) {
        cout << students[i].number << " " << students[i].name << " " << students[i].grade << " " << students[i].rank << endl;
    }

    return 0;
}

