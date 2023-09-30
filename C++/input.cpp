#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person()
    {
        name = "";
        age = 0;
    }

    void input()
    {
        cout << "Input name: ";
        cin.ignore(); // Untuk menghapus karakter newline (\n) dari buffer
        getline(cin, name); // Membaca input nama dengan getline
        cout << "Input age: ";
        cin >> age;
    }

    void output()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person person;

    // Input data
    person.input();

    // Output data
    person.output();

    return 0;
}
