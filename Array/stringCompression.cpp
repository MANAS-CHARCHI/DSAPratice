#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

string compression(string str){
    string result;
    int repeted=0;
    for(int i=0;i<str.length();i++){
        repeted++;
        if(i+1>=str.length() || str[i]!=str[i+1]){
            result+=str[i]+to_string(repeted);
            repeted=0;
        }
    }
    return result.length()<str.length()?result:str;
}

// other approach it can be:- first we create  a function to check the compresslength is > or not if greater we will return the orginal string, if not we will compress it agian
// downside of this approach is if the compress length is < we need to iterate the string 2 times full, but the good thing is that if 
// compress length is > we need not create another string and stor ethe value init.

int countCompress(string str){
    int totalcount=0;
    int iteratedCount=0;
    for(int i=0;i<str.length();i++){
        iteratedCount++;
        if(i+1>=str.length() || str[i+1]!=str[i]){
            string temp=to_string(iteratedCount);
            totalcount+=temp.length()+1;
            iteratedCount=0;
        }
    }
    return totalcount;
}
string compressionSecond(string str){
    if(str.length()<countCompress(str)) return str;
    string result;
    int repeted=0;
    for(int i=0;i<str.length();i++){
        repeted++;
        if(i+1>=str.length() || str[i]!=str[i+1]){
            result+=str[i]+to_string(repeted);
            repeted=0;
        }
    }
    return result.length()<str.length()?result:str;
}


int main(){
    cout<<compressionSecond("maanaas")<<endl;
    return 0;
}