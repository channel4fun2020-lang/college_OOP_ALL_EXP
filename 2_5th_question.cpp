#include<iostream>
using namespace std;
namespace Physics {
    int subject = 100;
}   
namespace Chemistry {
    int subject = 200;
}
int main() {
    cout << "Physics subject: " << Physics::subject << endl;
    cout << "Chemistry subject: " << Chemistry::subject << endl;
    return 0;
}
