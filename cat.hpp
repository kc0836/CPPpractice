#include <iostream>

using namespace std;

class Cats
{
    string name;
    string breed;
    int age;

  public:
    Cats(); // decalarig the constructor
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};

// defining the constructor
Cats::Cats()
{
    cout << "Assigning initial values in the constructor\n";
    name = "Unknown";
    breed = "Unknown";
    age = 99;
}

void Cats::setName(string nameIn)
{
    name = nameIn;
}

void Cats::setBreed(string breedIn)
{
    breed = breedIn;
}

void Cats::setAge(int ageIn)
{
    age = ageIn;
}

string Cats::getName()
{
    return name;
}

string Cats::getBreed()
{
    return breed;
}

int Cats::getAge()
{
    return age;
}

void Cats::printInfo()
{
    cout << name << " " << breed << " " << age;
}