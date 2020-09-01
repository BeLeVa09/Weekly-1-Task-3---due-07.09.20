#include <iostream>

int age;

int main()
{
    std::cout << "Hello, how old are you?\n";
    std::cin >> age;

    if (age < 20) {
        std::cout << "\nYou are young\n";
    }
    else if (age >= 20 && age <= 40) {
        std::cout << "\nYou are a grown up\n";
    }
    else if (age > 40) {
        std::cout << "\nYou are really old\n";
    }
}
