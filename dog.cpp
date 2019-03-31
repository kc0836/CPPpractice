#include "dog.hpp"

int main()
{
    Dog dog1, dog2;
    dog1.setName("Trixie");
    dog2.setName("Kali");
    dog1.setLicenseNumber(1234);
    dog2.setLicenseNumber(5678);

    dog1.printInfo();
    cout << "\n";
    dog2.printInfo();
    cout << "\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}