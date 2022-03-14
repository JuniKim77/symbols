#include <iostream>
#include <conio.h>

int main()
{
    std::cout << "Hello World!\n";

    int i = 5;
    int test = 0;
    int aaa = 10;
    int* crash = nullptr;

    while (true)
    {
        char ch = _getch();

        if (ch == 'd')
        {
            std::cout << i << std::endl;
            *crash = 1;
        }
        else
        {
            i++;
        }
    }
}