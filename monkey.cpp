#include <iostream>
#include <cctype>
#include <string>
#include "monkey.hpp"
std::string monkeyspeech(char letter)
{
    switch (tolower(letter))
    {
    case 'a':
        return "Uuu";
        break;
    case 'b':
        return "UUU";
        break;
    case 'c':
        return "uUU";
        break;
    case 'd':
        return "uuU";
        break;
    case 'e':
        return "uUu";
        break;
    case 'f':
        return "uuu";
        break;
    case 'g':
        return "ooga";
        break;
    case 'h':
        return "booga";
        break;
    case 'i':
        return "ooga booga";
        break;
    case 'j':
        return "booga booga";
        break;
    case 'k':
        return "ooga ooga";
        break;
    case 'l':
        return "booga ooga";
        break;
    case 'm':
        return "ooga ooga ooga";
        break;
    case 'n':
        return "OOO";
        break;
    case 'o':
        return "Ooo";
        break;
    case 'p':
        return "OOo";
        break;
    case 'q':
        return "ooO";
        break;
    case 'r':
        return "oOo";
        break;
    case 's':
        return "ooo";
        break;
    case 't':
        return "aaA";
        break;
    case 'u':
        return "aAA";
        break;
    case 'v':
        return "aaa";
        break;
    case 'w':
        return "AAA";
        break;
    case 'x':
        return "Aaa";
        break;
    case 'y':
        return "AaA";
        break;
    case 'z':
        return "eee";
        break;
    case '\n':
        return "\n";
        break;
    default:
        return "c";
        break;
    }
}