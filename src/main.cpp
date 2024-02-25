#include <iostream>
#include <vector>
#include <format>
#include <algorithm>
#include <functional>

void showNumberCount(std::vector<int> nums) // Time Complexity: O(nlogn)
{
    // Sort it
    std::sort(nums.begin(), nums.end());

    int count = 1;
    for (size_t index = 1; index < nums.size(); index++)
    {
        if (nums[index] == nums[index - 1])
        {
            count++;
        }
        else // If not equal -> Show the statement
        {
            std::cout
                << std::format("Number {0} appear {1} times", nums[index - 1], count)
                << std::endl;
            count = 1; // Reset the counter
        }
    }

    // Last number
    std::cout
        << std::format("Number {0} appear {1} times", nums[nums.size() - 1], count)
        << std::endl;
}

int main()
{
    std::vector<int> nums = {1, 2, 3, 2, 4, 4, 2, 4};
    // showNumberCount(nums);

    std::function<int(int, int)> sum = [&nums](int num1, int num2) -> int {
        return num1 + num2 + nums[1];
    };

    std::cout << sum(1,2) << std::endl;

    std::cout << "Hello World" << std::endl;

    std::cout << "Hello World from SadNguyen" << std::endl;

    return 0;
}
