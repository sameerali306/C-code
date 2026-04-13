#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
    string address;

public:
    void input()
    {
        cout << "Enter name :";
        cin >> name;
        cout << "Enter age :";
        cin >> age;
        cout << "Enter address :";
        cin >> address;
    }

    void show()
    {
        cout << "name :" << name << endl;
        cout << "age:" << age << endl;
        cout << "address :" << address << endl;
    }
};

int main()
{
    Person person1, person2;
    person1.input();
    person1.show();

    person2.input();
    person2.show();

} // namespace std;
