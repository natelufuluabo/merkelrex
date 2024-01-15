#include <iostream>

void printOptions(void);
int getUserInput(void);
void respondToUserInput(int userInput);

int main(void)
{
    int userInput = getUserInput();

    respondToUserInput(userInput);
}

void printOptions(void)
{
    std::cout << "1: Print help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Place an ask" << std::endl;
    std::cout << "4: Place a bid" << std::endl;
    std::cout << "5: Print wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Type in 1-6" << std::endl;
    std::cout << "" << std::endl;
}

int getUserInput(void)
{
    int userOption;
    do
    {
        printOptions();
        std::cin >> userOption;
    } while (userOption < 1 || userOption > 6);

    return userOption;
}

void respondToUserInput(int userInput)
{
    switch(userInput)
    {
        case 1:
            std::cout << "Help - choose options from the menu" << std::endl;
            std::cout << "and follow the on screen instructions." << std::endl;
            break;
        case 2:
            std::cout << "Stats - choose options from the menu" << std::endl;
            std::cout << "and follow the on screen instructions." << std::endl;
            break;
        case 3:
            std::cout << "Ask - choose options from the menu" << std::endl;
            std::cout << "and follow the on screen instructions." << std::endl;
            break;
        case 4:
            std::cout << "Bid - choose options from the menu" << std::endl;
            std::cout << "and follow the on screen instructions." << std::endl;
            break;
        case 5:
            std::cout << "Wallet - choose options from the menu" << std::endl;
            std::cout << "and follow the on screen instructions." << std::endl;
            break;
        case 6:
            std::cout << "Continue - choose options from the menu" << std::endl;
            std::cout << "and follow the on screen instructions." << std::endl;
            break;
    }
}