/* The header file for dog.cpp */
#include <iostream>

using namespace std;

class Dog
{
    string name;
    int licenseNumber;

  public:
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumber);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumber;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
}

void Dog::printInfo()
{
    cout << name << " " << licenseNumber;
}