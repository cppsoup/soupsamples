
#include <iostream>
#include <Soup/Colors.h>

int main()
{
    Colors::ColorF color = Colors::ColorF::Black();
    std::wcout << L"Hello World: " << color <<  L"!" << std::endl;
}