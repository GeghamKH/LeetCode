#include <iostream>
#include <vector>
#include <deque>

 std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
    std::vector<int> result;
    std::deque<int> dq;
    int n = nums.size();
    if (nums.size() < k) exit(1);

    for (int i = 0; i < n; i++) {
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }
        while (!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }
    return result;
}


void print(const std::vector<int>& nums) noexcept 
{
    for(auto&& i : nums)
        std::cout << i; 
    std::cout << std::endl;
}


int main() {
     
     std::vector<int> nums{1,3,-1,-3,5,3,6,7};
     print(nums);
     print (maxSlidingWindow(nums, 3));
     
}
