#include <iostream>

int printOptions(void);
int getUserInput(void);

int main(void)
{
    int userInput = getUserInput();

    std::cout << "Picked: " << userInput << std::endl;
}

int printOptions(void)
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

    return 0;
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