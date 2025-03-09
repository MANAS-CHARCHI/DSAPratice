#include<iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

// [5 Mar 2025] [1st Array]
// Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
// cannot use additional data structurs?

bool isUniqueSecondApproach(string a1_1_1){
    if(a1_1_1.length()>128) return false;
    unordered_map<char, bool> hashmap(false);
    for(int i=0;i<a1_1_1.length();i++){
        if(hashmap[a1_1_1[i]]) return false;
        hashmap[a1_1_1[i]]=true;
    }
    return true;
}

bool isUniqueOneApproach(string a1_0_1)
{
    if(a1_0_1.length()>128) return false;
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
       example_is = "abcde";
    //    if (isUniqueOneApproach(example_is))
       if (isUniqueSecondApproach(example_is))
           cout << "IS UNIQUE" << endl;
       else
           cout << "NOT UNIQUE" << endl;
    return 0;
}