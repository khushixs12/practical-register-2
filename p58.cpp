#include <iostream>
using namespace std;

const int maximum = 50;

class parent {
private:
    char name[maximum];
    int age;

public:
    char color[maximum];
    char sex;

    void getData();
    void displayData();
};

class child : public parent {
private:
    char qual[maximum];
    float salary;

public:
    void readData();
    void printData();
};

void parent::getData() {
    cout << "Enter the name: "; cin >> name;
    cout << "Enter the age: "; cin >> age;
    cout << "Enter the color: "; cin >> color;
    cout << "Enter the sex: "; cin >> sex;
}

void parent::displayData() {
    cout << "Name = " << name << endl;
    cout << "Age = " << age << endl;
    cout << "Sex = " << sex << endl;
}

void child::readData() {
    getData();
    cout << "Enter the qualifications: "; cin >> qual;
    cout << "Enter the salary: "; cin >> salary;
}

void child::printData() {
    displayData();
    cout << "Qualification = " << qual << endl;
    cout << "Salary = " << salary << endl;
}

int main() {
    child c1;
    cout << "Enter child's information:" << endl;
    c1.readData();
    cout << endl;
    cout << "Child's information is as follows:" << endl;
    c1.printData();
    return 0;
}

