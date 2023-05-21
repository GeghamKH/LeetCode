#include <iostream>

bool isPalindrome(int x) {
        if(x >= 0 && x<10 ) return true;

        if(x<0 || x%10 == 0) return false;

        std::string str = std::to_string(x);
        auto begin_ = str.begin();
        auto end_ = str.end()-1;
        while(begin_ < end_ )
        {
            if(*begin_ == *end_)
            { 
                ++begin_;
                --end_;
            }
            else return false;
        }
        return true;
    }

int main() {
    
    std::cout << std::boolalpha << isPalindrome(1452) << std::endl;
    std::cout << std::boolalpha << isPalindrome(1441) ;
     
}
