#include <iostream>
#include <string>
#include <random>
#include <windows.h>


std::string generate_password(int length) {
    std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};':\"\\|,.<>/?";
    std::string password;

    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<> distribution(0, characters.size() - 1);

    for (int i = 0; i < length; i++) {
        int random_index = distribution(generator);
        password += characters[random_index];
    }

    return password;
}

int main() 
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int password_length;
    std::cout << "Enter the desired password length: ";
    std::cin >> password_length;

    std::string password = generate_password(password_length);
    std::cout << "Generated password: ";
    SetConsoleTextAttribute(hConsole, 5);
    std::cout << password << std::endl;
    SetConsoleTextAttribute(hConsole, 7);
    system("pause");
    
    return 0;
}
