#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    string address;
    string batch;
    
    void input() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll no: ";
        cin >> roll_no;
        cout << "Enter address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Enter batch: ";
        getline(cin, batch);
    }
    
    void display() {
        cout << "\nName: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Address: " << address << endl;
        cout << "Batch: " << batch << endl;
    }
};

void saveStudents() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    
    ofstream file("students.txt");
    
    for (int i = 0; i < n; i++) {
        Student s;
        cout << "\nEnter details for student " << i + 1 << ":\n";
        s.input();
        
        file << s.name << endl;
        file << s.roll_no << endl;
        file << s.address << endl;
        file << s.batch << endl;
    }
    
    file.close();
    cout << "\nStudents saved successfully!\n";
}

void searchStudent() {
    int search_roll;
    cout << "Enter roll no to search: ";
    cin >> search_roll;
    
    ifstream file("students.txt");
    Student s;
    bool found = false;
    
    while (getline(file, s.name)) {
        file >> s.roll_no;
        file.ignore();
        getline(file, s.address);
        getline(file, s.batch);
        
        if (s.roll_no == search_roll) {
            cout << "\nStudent found!";
            s.display();
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "\nStudent with roll no " << search_roll << " not found!\n";
    }
    
    file.close();
}

int main() {
    int choice;
    
    do {
        cout << "\n--- Student Management ---\n";
        cout << "1. Add Students\n";
        cout << "2. Search Student by Roll No\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                saveStudents();
                break;
            case 2:
                searchStudent();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 3);
    
    return 0;
}