#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements:";    
    cin >> n;

    int *arr = new int[n];
    int sum = 0;

    cout << "Enter the elements:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    double average = (float)sum / n;
    cout << "Sum of elements: " << sum << endl;
    cout << "Average of elements: " << average << endl;
    delete[] arr;
    return 0;
}