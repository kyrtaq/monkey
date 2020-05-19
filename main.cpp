#include <iostream>
#include "monkey.hpp"
int main()
{
    char ch;
    std::string out;
    while(1)
    {
        std::cin.get(ch);
        out = monkeyspeech(ch);
        if(out=="c")
            std::cout << ch;
        else
            std::cout << out;
    }
    return 0;
}