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
        name = "kamu";
        age = 100;
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

    // Output data
    person.output();

    return 0;
}
