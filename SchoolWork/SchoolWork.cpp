#include <iostream>
#include <string>
#include <conio.h>

int age;

int main()
{
    system("pause");

    std::cout << "Greetings. Please enter your age: ";
    std::cin >> age;

    if (age > 20) {
        std::cout << "You are an adult.";
    }

    if (age < 20) {
        std::cout << "You are a teenager.";
    }
}