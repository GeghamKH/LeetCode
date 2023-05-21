#include <iostream>
#include <string>
#include <map>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    
    std::map<int, int> Map;

    for (int i = 0; i < nums.size(); ++i)
    {
        int f = nums[i];

        if (Map.empty()) Map.insert(std::make_pair<int, int>( std::move(nums[i]), std::move(i)));
        else
        {
            auto t = Map.find( (target - nums[i]));
            
            if (t != Map.end())
                return std::vector<int>{t->second, i};
            else
                Map.insert(std::make_pair<int, int>(std::move(nums[i]), std::move(i)));

        }



    }
}

int main()
{
    std::vector<int> vec{ 2,7,9,5,40 };
    int target = 9;

    twoSum(vec, target);


	return 0;
}