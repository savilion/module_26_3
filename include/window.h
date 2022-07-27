#pragma once

#include <iostream>

class Display
{
    friend class Window;

    int widthDisplay{80};
    int heightDisplay{50};

public:

    void setResolutionDisplay(int x, int y)
    {
        widthDisplay = x;
        heightDisplay = y;
    }
};

class Window
{
    int startingPointX{0};
    int startingPointY{0};
    int width{8};
    int height{5};

    Display widthDisplay;
    Display heightDisplay;

public:

    void moveWindow()
    {
        int offsetX, offsetY;
        std::cout << "Enter the window offset(x,y):" ;
        while (true)
        {
            std::cin >> offsetX >> offsetY;
            if (offsetX < 0 || offsetY < 0)
            {
                std::cout << "Error! The coordinate cannot be negative. Try again." << std::endl;
            }
            else if ((offsetX + startingPointX + width) > widthDisplay.widthDisplay && (offsetY +startingPointY + height) > heightDisplay.heightDisplay)
            {
                std::cout << "Error! Leaving the screen, repeat the input." << std::endl;
            }
            else
            {
                startingPointX += offsetX;
                startingPointY += offsetY;
                std::cout << "New window coordinates: x = " << startingPointX << ", y = " << startingPointY << std::endl;
                break;
            }
        }
    }
    void resizeWindow()
    {
        int newWidth, newHeight;
        std::cout << "Enter the window new size(width,height):" ;
        while (true)
        {
            std::cin >> newWidth >> newHeight;
            if (newWidth < 0 || newHeight < 0)
            {
                std::cout << "Error! The coordinate cannot be negative. Try again." << std::endl;
            }
            else if ((newWidth + startingPointX) > widthDisplay.widthDisplay && (newHeight + startingPointY) > heightDisplay.heightDisplay)
            {
                std::cout << "Error! Leaving the screen, repeat the input." << std::endl;
            }
            else
            {
                width = newWidth;
                height = newHeight;
                std::cout << "New window size: width = " << width << ", height = " << height << std::endl;
                break;
            }
        }
    }
    void showWindow()
    {
        for (int i = 0; i < heightDisplay.heightDisplay; ++i)
        {
            for (int j = 0; j < widthDisplay.widthDisplay; ++j)
            {
                if (i >= startingPointY && i <= startingPointY + height)
                {
                    if (j >= startingPointX && j <= startingPointX + width)
                    {
                        std::cout << 1 << " ";
                    }
                    else std::cout << 0 << " ";
                }
                else std::cout << 0 << " ";
            }
            std::cout << std::endl;
        }
    }
};
