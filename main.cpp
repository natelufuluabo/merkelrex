#include <iostream>

void printMenu(void);
int getUserInput(void);
void processUserInput(int userInput);
void printHelp(void);
void printMarketStats(void);
void enterAsk(void);

int main(void)
{
    while(true)
    {
        int userInput = getUserInput();
        processUserInput(userInput);
    }
}

void printMenu(void)
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
        printMenu();
        std::cin >> userOption;
    } while (userOption < 1 || userOption > 6);

    return userOption;
}

void printHelp(void)
{
    std::cout << "Help - choose options from the menu" << std::endl;
    std::cout << "and follow the on screen instructions." << std::endl;
}

void printMarketStats(void)
{
    std::cout << "Stats - choose options from the menu" << std::endl;
    std::cout << "and follow the on screen instructions." << std::endl;
}

void enterAsk(void)
{
    std::cout << "Ask - choose options from the menu" << std::endl;
    std::cout << "and follow the on screen instructions." << std::endl;
}

void processUserInput(int userInput)
{
    switch(userInput)
    {
        case 1:
            printHelp();
            break;
        case 2:
            printMarketStats();
            break;
        case 3:
            enterAsk();
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