#include <iostream>
#include "window.h"

int main()
{
    auto* display = new Display;
    auto* window = new Window;

    int answer;
    bool exit = false;

    while (!exit)
    {
        std::cout << R"(1. The "move" command displaces the window)" << std::endl;
        std::cout << R"(2. The "resize" command resizes)" << std::endl;
        std::cout << R"(3. The "display" command displays)" << std::endl;
        std::cout << R"(4. The "exit" command exit)" << std::endl;
        std::cout << "Enter the command: ";
        std::cin >> answer;

        if (std::cin.fail())
        {
            std::cout << "Wrong command. Try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
        else
        {
            switch (answer)
            {
                case 1:
                    window->moveWindow();
                    break;
                case 2:
                    window->resizeWindow();
                    break;
                case 3:
                    window->showWindow();
                    break;
                case 4:
                    exit = true;
                    break;
                default:
                    std::cout << "Wrong command. Try again." << std::endl;
            }
        }
    }

    delete window;
    delete display;
}
