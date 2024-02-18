#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Hello World" << std::endl;

    std::cout << argc << std::endl;
    if (argc >= 2)
    {
        for (size_t index = 1; index < argc; index++)
        {
            std::cout << argv[index] << std::endl;
        }
    }

    return 0;
}
