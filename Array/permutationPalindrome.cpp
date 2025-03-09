#include<iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

// [8 Mar 2025]
// Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palindrome.
// A palindrome is a word or phrase that is the same forwards and backwards. A permutation
// is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
// EXAMPLE
// Input: Tact Coa
// Output: True (permutations: "taco cat", "atco eta", etc.)

bool permutationPalindromeOneApproach(string &a4_1_1){
    for(int i=0;i<a4_1_1.length();i++) a4_1_1[i]=char(tolower(a4_1_1[i]));
    unordered_map<char, int> hashmap;
    for(int i=0;i<a4_1_1.length();i++){
        if(a4_1_1[i]==' ') continue;
        if(hashmap[a4_1_1[i]]==1) hashmap[a4_1_1[i]]--;
        else hashmap[a4_1_1[i]]++;
    }
    int checkLeft=0;
    for(auto i: hashmap) if(i.second==1) checkLeft++;
    if(checkLeft<=1) return true;
    return false;
}

int main()
{
    string input = "Tact Coa";
    if(permutationPalindromeOneApproach(input))
        cout<<R"(")"<<input<<R"(" is a permutation Palindrome)"<<endl;
    return 0;
}