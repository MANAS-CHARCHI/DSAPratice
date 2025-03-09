#include<iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

// [7 Mar 2025]
// URLify: Write a method to replace all spaces in a string with '%20'. You may assume that the string
// has sufficient space at the end to hold the additional characters, and that you are given the "true"
// length of the string. (Note: If implementing in Java, please use a character array so that you can
// perform this operation in place.)
// EXAMPLE
// Input: "Mr John Smith "
// , 13
// Output: "Mr%20John%20Smith"

string URLifyOneApproach(string &a3_0_1, int size)
{
    int totalSpace = 0;
    for (int i = 0; i < size; i++)
        if (a3_0_1[i] == ' ')
            totalSpace++;
    int newIndex = size + totalSpace * 2;
    string result(newIndex, ' ');
    int j = newIndex - 1;
    for (int i = size - 1; i >= 0; i--)
    {
        if (a3_0_1[i] == ' ')
        {
            result[j] = '0';
            result[j - 1] = '2';
            result[j - 2] = '%';
            j -= 3;
        }
        else
        {
            result[j] = a3_0_1[i];
            j--;
        }
    }
    return result;
}
int main()
{
    string input="Mr John Smith";
    string result=URLifyOneApproach(input, 13);
    cout<<result<<endl;
    return 0;
}