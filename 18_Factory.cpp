/*
    Author: Umesh Pimpalkar 
    Email: umeshppimpalkar@outlook.com

    Description: In this the Factory design pattern is explained.
*/

#include <iostream>
#include <string>

class Color
{
    public:
        Color()
          : color("")
        {}

        std::string color;

        /* This is the factory method. */
        static Color* getcolor(std::string color);
};

class red : public Color
{
    public:
        red()
        {
            color = "red";
        }
};

class blue : public Color
{
    public:
        blue()
        {
            color = "blue";
        }
};

Color* Color::getcolor(std::string color)
{
    if (color == "red")
        return new red();
    else if (color == "blue")
        return new blue();
    else
        return 0;
}

int main()
{
    Color* Red  = Color::getcolor("red");
    std::cout << Red->color << std::endl;

    Color* Blue = Color::getcolor("blue");
    std::cout << Blue->color << std::endl;
}