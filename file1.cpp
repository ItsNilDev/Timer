#include <iostream>

void something(int i)
{

}

int main()
{
    for(int i = 1; i < 10; i++)
    {
        std::cout << "Hello";
        something(i);
    }
}
