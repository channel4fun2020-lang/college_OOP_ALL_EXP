#include<iostream>
using namespace std;
class Account{
    int acc_no;
    string acc_name;
    string balance;
    public:
    void accept();
    void display();
};
void Account::accept(){
    cout << "Enter account number:" << endl;
    cin >> acc_no;
    cout << "Enter account name:" << endl;
    cin >> acc_name;
    cout << "Enter balance:" << endl;
    cin >> balance;
}    
void Account::display(){
    cout << "Account number is:" << acc_no << endl;
    cout << "Account name is:" << acc_name << endl;
    cout << "Balance is:" << balance << endl;
}
int main(){
    Account a1;
    a1.accept();
    a1.display();
    return 0;
}