#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Administrative Part
void administrativePart() {
    ofstream file("admin.txt", ios::app);

    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }

    int choice;

    cout << "\n--- Administrative Part ---\n";
    cout << "1. Add Patient\n";
    cout << "2. Add Doctor\n";
    cout << "3. Billing\n";
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();   // clear buffer

    if (choice == 1) {
        string name;
        int age;

        cout << "Enter Patient Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        file << "Patient Name: " << name << ", Age: " << age << endl;
        cout << "Patient record saved.\n";
    }
    else if (choice == 2) {
        string dname;

        cout << "Enter Doctor Name: ";
        getline(cin, dname);

        file << "Doctor Name: " << dname << endl;
        cout << "Doctor record saved.\n";
    }
    else if (choice == 3) {
        int amount;

        cout << "Enter Bill Amount: ";
        cin >> amount;

        file << "Bill Amount: " << amount << endl;
        cout << "Billing record saved.\n";
    }
    else {
        cout << "Invalid choice!\n";
    }

    file.close();
}

// MAIN FUNCTION (MOST IMPORTANT)
int main() {
    administrativePart();
    return 0;
}

