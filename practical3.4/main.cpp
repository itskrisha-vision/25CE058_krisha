#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

// Class to store CSV data
class Student {
public:
    string name;
    int age;
    float marks;

    Student(string n, int a, float m) {
        name = n;
        age = a;
        marks = m;
    }

    void display() {
        cout << name << " | " << age << " | " << marks << endl;
    }
};

int main() {
    ifstream file("data.csv");

    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    vector<Student> students;
    string line;

    int total = 0;
    int valid = 0;
    int invalid = 0;

    while (getline(file, line)) {
        total++;

        stringstream ss(line);
        string name, ageStr, marksStr;

        getline(ss, name, ',');
        getline(ss, ageStr, ',');
        getline(ss, marksStr, ',');

        try {
            int age = stoi(ageStr);        // may throw error
            float marks = stof(marksStr); // may throw error

            Student s(name, age, marks);
            students.push_back(s);
            valid++;
        }
        catch (...) {
            cout << "Invalid data found in line: " << line << endl;
            invalid++;
        }
    }

    file.close();

    // Display valid records
    cout << "\nValid Records:\n";
    for (auto s : students) {
        s.display();
    }

    // Summary
    cout << "\nSummary:\n";
    cout << "Total records: " << total << endl;
    cout << "Valid records: " << valid << endl;
    cout << "Invalid records: " << invalid << endl;

    return 0;
}
