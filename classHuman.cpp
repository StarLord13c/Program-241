#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Human 
{
private:
    string name;
    int birthYear;
    double height;
    double weight;
    string country;

public:
    Human() 
    {
        name = "";
        birthYear = 0;
        height = 0.0;
        weight = 0.0;
        country = "";
    }
    Human(string n, int bYear, double h, double w, string c) 
    {
        name = n;
        birthYear = bYear;
        height = h;
        weight = w;
        country = c;
    }

    string getName() 
    {
        return name;
    }
    int getBirthYear() 
    {
        return birthYear;
    }
    double getHeight() 
    {
        return height;
    }
    double getWeight() 
    {
        return weight;
    }
    string getCountry() 
    {
        return country;
    }
    void displayInfo() 
    {
        cout << "Ім'я: " << name << endl;
        cout << "Рік народження: " << birthYear << endl;
        cout << "Зріст: " << height << " см" << endl;
        cout << "Вага: " << weight << " кг" << endl;
        cout << "Країна: " << country << endl;
    }

    void inputInfo() 
    {
        cout << "Введіть ім'я: ";
        cin >> name;
        cout << "Введіть рік народження: ";
        cin >> birthYear;
        cout << "Введіть зріст (у см): ";
        cin >> height;
        cout << "Введіть вагу (у кг): ";
        cin >> weight;
        cout << "Введіть країну: ";
        cin >> country;
    }
};

int main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Human person;
    cout << "Введіть інформацію про людину:" << endl;
    person.inputInfo();
    cout << endl << "Інформація про людину:" << endl;
    person.displayInfo();
    return 0;
}
