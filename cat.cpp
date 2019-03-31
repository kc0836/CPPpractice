#include "cat.hpp"

int main()
{
    Cats cat1, cat2, cat3;
    cat1.setName("Kimmy");
    cat2.setName("Bobby");
    cat1.setBreed("calico");
    cat2.setBreed("main coon");
    cat1.setAge(4);
    cat2.setAge(1);

    cat1.printInfo();
    cout << "\n";
    cat2.printInfo();
    cout << "\n";
    cat3.printInfo();
    cout << "\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}