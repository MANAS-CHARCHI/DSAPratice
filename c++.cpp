#include<iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
// One Away: There are three types of edits that can be performed on strings: insert a character,
// remove a character, or replace a character. Given two strings, write a function to check if they are
// one edit (or zero edits) away.
// EXAMPLE
// pale, ple -> true
// pales, pale -> true
// pale, bale -> true
// pale, bake -> false
bool oneReplacement(string s1, string s2){
    bool flag=false;
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            if(flag) return false;
            flag=true;
        }
    }
    return true;
}
bool oneEdit(string s1, string s2){
    int index1=0;
    int index2=0;
    while(index2<s2.length() && index1<s1.length()){
        if(s1[index1]!=s2[index2]){
            if(index1!=index2) return false;
            index2++;
        }
        else{
            index1++;
            index2++;
        }
    }
    return true;
}
bool oneAwayOneApproach(string s1, string s2){
    if(s1==s2) return false;
    if(s1.length()==s2.length()) return oneReplacement(s1, s2);
    if(s1.length()+1==s2.length()) return oneEdit(s2, s1);
    if(s1.length()==s2.length()+1) return oneEdit(s1, s2);
    return false;
}

bool oneAwaySecondApproach(string s1, string s2){
    if(s1==s2) return false;
    if((abs(int(s1.length()-s2.length())))>1) return false;
    if(s1.length()<s2.length()) swap(s1, s2);
    int index1=0, index2=0;
    bool flag=false;
    while(index2<s2.length() && index1<s1.length()){
        if(s2[index2]!=s1[index1]){
            if(flag) return false;
            flag=true;
            if(s1.length()==s2.length()){
                index1++;
            }
        }else index1++;
        index2++;
    }
    return true;
}

// bool permutationPalindromeOneApproach(string &a4_1_1){
//     for(int i=0;i<a4_1_1.length();i++) a4_1_1[i]=char(tolower(a4_1_1[i]));
//     unordered_map<char, int> hashmap;
//     for(int i=0;i<a4_1_1.length();i++){
//         if(a4_1_1[i]==' ') continue;
//         if(hashmap[a4_1_1[i]]==1) hashmap[a4_1_1[i]]--;
//         else hashmap[a4_1_1[i]]++;
//     }
//     int checkLeft=0;
//     for(auto i: hashmap) if(i.second==1) checkLeft++;
//     if(checkLeft<=1) return true;
//     return false;
// }

// string URLifyOneApproach(string &a3_0_1, int size)
// {
//     int totalSpace = 0;
//     for (int i = 0; i < size; i++)
//         if (a3_0_1[i] == ' ')
//             totalSpace++;
//     int newIndex = size + totalSpace * 2;
//     string result(newIndex, ' ');
//     int j = newIndex - 1;
//     for (int i = size - 1; i >= 0; i--)
//     {
//         if (a3_0_1[i] == ' ')
//         {
//             result[j] = '0';
//             result[j - 1] = '2';
//             result[j - 2] = '%';
//             j -= 3;
//         }
//         else
//         {
//             result[j] = a3_0_1[i];
//             j--;
//         }
//     }
//     return result;
// }

// static inline void ltrim(string &a_trim)
// {
//     a_trim.erase(
//         a_trim.begin(),
//         find_if(a_trim.begin(), a_trim.end(),
//                 [](unsigned char ch) { // lambda function(anonymous function)
//                     return !isspace(ch);
//                 }));
// }

// static inline void rtrim(string &a_trim)
// {
//     a_trim.erase(
//         find_if(a_trim.rbegin(), a_trim.rend(),
//                 [](unsigned char ch) { // lambda function(anonymous function)
//                     return !isspace(ch);
//                 })
//             .base(),
//         a_trim.end());
// }

// static inline void trim(string &a_trim)
// {
//     ltrim(a_trim);
//     rtrim(a_trim);
// }

// bool checkPermutationOneApproach(string a2_0_1_1, string a2_0_1_2)
// {
//     trim(a2_0_1_1);
//     trim(a2_0_1_2);
//     if (a2_0_1_1.length() != a2_0_1_2.length())
//         return false;
//     sort(a2_0_1_1.begin(), a2_0_1_1.end());
//     sort(a2_0_1_2.begin(), a2_0_1_2.end());
//     if (a2_0_1_1 != a2_0_1_2)
//         return false;
//     return true;
// }
// bool checkPermutationSecondApproach(string a2_0_2_1, string a2_0_2_2)
// {
//     unordered_map<char, int> hashmap;
//     for (int i = 0; i < a2_0_2_1.length(); i++)
//     {
//         hashmap[a2_0_2_1[i]]++;
//     }
//     for (int i = 0; i < a2_0_2_2.length(); i++)
//     {
//         hashmap[a2_0_2_2[i]]--;
//         if (a2_0_2_2[i] < 0)
//             return false;
//     }
//     return true;
// }

// bool isUniqueOneApproach(string a1_0_1)
// {
//     bool check = false;
//     unordered_map<char, int> hashMap;
//     for (int i = 0; i < a1_0_1.length(); i++)
//     {
//         hashMap[a1_0_1[i]]++;
//         if (hashMap[a1_0_1[i]] == 2)
//             check = true;
//         if (check)
//             return false;
//     }
//     if (check)
//         return false;
//     return true;
// }

int main()
{
    //----------------------isUniqueOneApproach [start]------------------------------------Problem-1___[5 Mar 2025]
    //    string example_is;
    //    example_is = "abcd";
    //    if (isUniqueOneApproach(example_is))
    //        cout << "IS UNIQUE" << endl;
    //    else
    //        cout << "NOT UNIQUE" << endl;
    //----------------------isUniqueOneApproach [end]-----------------------------------------------
    //----------------------checkPermutationOneApproach [start]----------------------------Problem-2___[6 Mar 2025]
    //    string check1="             manas                     ";
    //    string check2="   sanam";
    //  if (checkPermutationOneApproach(check1, check2))
    //    if(checkPermutationSecondApproach(check1, check2))
    //        cout<<"One IS a permutation of the other"<<endl;
    //    else cout<<"One IS NOT a permutation of other"<<endl;
    //----------------------checkPermutationOneApproach [end]----------------------------------------
    //----------------------URLifyOneApproach [start]--------------------------------------Problem-3___[7 Mar 2025]
    //    string input="Mr John Smith";
    //    string result=URLifyOneApproach(input, 13);
    //    cout<<result<<endl;
    //----------------------URLifyOneApproach [end]---------------------------------------------------
    //---------------------Permutation Palindrome [start]----------------------------------Problem-4___[8 Mar 2025]
    // string input = "Tact Coa";
    // if(permutationPalindromeOneApproach(input))
    //     cout<<R"(")"<<input<<R"(" is a permutation Palindrome)"<<endl;
    //---------------------Permutation Palindrome [end]------------------------------------------------
    cout<<oneAwayOneApproach("bale", "pale")<<endl;
    cout<<oneAwaySecondApproach("bale", "pale")<<endl;
    return 0; 
}
