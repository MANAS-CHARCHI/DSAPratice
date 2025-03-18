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
int main(){
    cout<<oneAwayOneApproach("bale", "pale")<<endl;
    cout<<oneAwaySecondApproach("bale", "pale")<<endl;
    return 0; 
}