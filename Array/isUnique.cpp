#include<iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

// [5 Mar 2025]
// Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
// cannot use additional data structures?

bool isUniqueOneApproach(string a1_0_1)
{
    bool check = false;
    unordered_map<char, int> hashMap;
    for (int i = 0; i < a1_0_1.length(); i++)
    {
        hashMap[a1_0_1[i]]++;
        if (hashMap[a1_0_1[i]] == 2)
            check = true;
        if (check)
            return false;
    }
    if (check)
        return false;
    return true;
}

int main()
{
       string example_is;
       example_is = "abcd";
       if (isUniqueOneApproach(example_is))
           cout << "IS UNIQUE" << endl;
       else
           cout << "NOT UNIQUE" << endl;
    return 0;
}