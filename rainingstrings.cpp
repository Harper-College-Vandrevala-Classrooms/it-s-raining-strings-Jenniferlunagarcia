#include <iostream>
#include <string>
#include <algorithm>

void welcomeMessage() {
    std::cout << "Welcome to the Business Name Entry Program!" << std::endl;
}

void goodbyeMessage() {
    std::cout << "Thank you for using the program. Goodbye!" << std::endl;
}

bool wantToContinue() {
    std::string userInput;
    std::cout << "Do you want to enter another business name? (y/n): ";
    std::getline(std::cin, userInput);

    // Convert user input to lowercase for comparison
    std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);

    return (userInput == "y" || userInput == "yes");
}

int main() {
    std::string businessName;
    welcomeMessage();

    // Loop to allow entering multiple business names
    do {
        std::cout << "Enter a business name: ";
        std::getline(std::cin, businessName);

        std::cout << "You entered: " << businessName << std::endl;

    } while (wantToContinue());

    goodbyeMessage();
    return 0;
}


