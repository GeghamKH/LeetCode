#include <iostream>
#include <string>


    int itrVal(std::string::iterator itr_1)
    {
        int val;
        switch (*itr_1)
        {
        case 'I': val = 1; break;
        case 'V': val = 5; break;
        case 'X': val = 10; break;
        case 'L': val = 50; break;
        case 'C': val = 100; break;
        case 'D': val = 500; break;
        case 'M': val = 1000; break;
        }
        return val;

    }

    int romanToInt(std::string s) {

        if (s.empty()) return 0;

        auto itr_one = s.begin();
        auto itr_two = s.begin() + 1;

        int retVal(0);
        while (itr_one != s.end() && itr_two != s.end())
        {
            int num_1 = itrVal(itr_one);
            int num_2 = itrVal(itr_two);
            if (num_1 >= num_2)
            {
                retVal += num_1;
                ++itr_one;
                ++itr_two;
            }
            else
            {
                retVal += (num_2 - num_1);
                s.end() - itr_one >= 2 ? itr_one += 2 : itr_one;
                s.end()- itr_two >= 2 ? itr_two += 2 : itr_two;
            }
        }

        if (itr_one != s.end())
            retVal += itrVal(itr_one);


        return retVal;
    }


int main()
{
    romanToInt("IVXLCDDM");



	return 0;
}