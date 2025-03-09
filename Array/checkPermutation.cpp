#include<iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
static inline void ltrim(string &a_trim)
{
    a_trim.erase(
        a_trim.begin(),
        find_if(a_trim.begin(), a_trim.end(),
                [](unsigned char ch) { // lambda function(anonymous function)
                    return !isspace(ch);
                }));
}
static inline void rtrim(string &a_trim)
{
    a_trim.erase(
        find_if(a_trim.rbegin(), a_trim.rend(),
                [](unsigned char ch) { // lambda function(anonymous function)
                    return !isspace(ch);
                })
            .base(),
        a_trim.end());
}
static inline void trim(string &a_trim)
{
    ltrim(a_trim);
    rtrim(a_trim);
}

// [6 Mar 2025]
// Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.

bool checkPermutationOneApproach(string a2_0_1_1, string a2_0_1_2)
{
    trim(a2_0_1_1);
    trim(a2_0_1_2);
    if (a2_0_1_1.length() != a2_0_1_2.length())
        return false;
    sort(a2_0_1_1.begin(), a2_0_1_1.end());
    sort(a2_0_1_2.begin(), a2_0_1_2.end());
    if (a2_0_1_1 != a2_0_1_2)
        return false;
    return true;
}
bool checkPermutationSecondApproach(string a2_0_2_1, string a2_0_2_2)
{
    unordered_map<char, int> hashmap;
    for (int i = 0; i < a2_0_2_1.length(); i++)
    {
        hashmap[a2_0_2_1[i]]++;
    }
    for (int i = 0; i < a2_0_2_2.length(); i++)
    {
        hashmap[a2_0_2_2[i]]--;
        if (a2_0_2_2[i] < 0)
            return false;
    }
    return true;
}

int main()
{
       string check1="             manas                     ";
       string check2="   sanam";
    // if (checkPermutationOneApproach(check1, check2))
    if(checkPermutationSecondApproach(check1, check2))
        cout<<"One IS a permutation of the other"<<endl;
    else cout<<"One IS NOT a permutation of other"<<endl;
    return 0;
}