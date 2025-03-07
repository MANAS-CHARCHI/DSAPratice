#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>

using namespace std;
class Account{

    private:
    double balance;
    public:
    void setBalance(double balance);
    double getBalance();
};
void Account::setBalance(double balance){this->balance=balance;}
double Account::getBalance(){ return balance;}

int main(){

    Account manas;
    manas.setBalance(100.10);
    cout<<manas.getBalance();


}