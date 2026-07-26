#include <iostream>
using namespace std;

int main() {
    int marks, tot;
    
    cout << "Enter Marks: " << endl;
    cin >> marks;
    cout << "Enter total marks: ";
    cin >> tot;
    cout << "\n";
    double se = (static_cast<double>(marks) / tot) * 100;
    cout << "Perncentage is: " << se << "%\n" << endl;
    if(se >= 95){
        cout << "Topper!\n";
    } else if(se >= 80){
        cout << "Good!\n";
        
    } else if(se >= 60){
        cout << "Average.\n";
    }else {
        cout << "Poor.\n";
    }
    
    return 0;
}