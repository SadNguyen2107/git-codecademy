#include <iostream>
#include <array>

int main()
{
    std::array<int, 3> nums = {1, 23, 42};

    try
    {
        std::cout << nums.at(10) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
