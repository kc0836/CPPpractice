#include <iostream>
#include <stdio.h>
#include <cstddef>

int main()
{
    int userInput[40];

    // Enter the numbers into an array called userInput
    for (size_t i = 0; i < 40; i++)
    {
        scanf("%d", &userInput[i]);
    }

    // print the array
    std::cout << "\nThe array\n";
    for (size_t i = 0; i < 40; i++)
    {
        std::cout << userInput[i] << " ";
    }

    // print the array in reverse order
    std::cout << "\n\nThe array in reverse order\n";
    for (size_t i = 0; i >= 0; i++)
    {
        std::cout << userInput[i] << " ";
    }

    // sorting the array
    for (size_t i = 0; i < 40; i++)
    {
        for (size_t j = 0; j < 39 - i; j++)
        {
            if (userInput[j] > userInput[j + 1])
            {
                int temp;
                temp = userInput[j];
                userInput[j] = userInput[j + 1];
                userInput[j + 1] = temp;
            }
        }
    }

    std::cout << "\n\nThe array sorted\n";
    for (size_t i = 0; i < 40; i++)
    {
        std::cout << userInput[i] << " ";
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}