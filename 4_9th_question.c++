#include<iostream>
using namespace std;
class Product{
    string order_id;
    string product_name;
    double price;
    public:
    void accept();
    void display();
};
void Product::accept(){
    cout << "Enter order ID:" << endl;
    cin >> order_id;
    cout << "Enter product name:" << endl;
    cin >> product_name;
    cout << "Enter price:" << endl;
    cin >> price;
}
void Product::display(){
    cout << "Order ID is:" << order_id << endl;
    cout << "Product name is:" << product_name << endl;
    cout << "Price is:" << price << endl;
}
int main(){
    Product p1;
    p1.accept();
    p1.display();
    return 0;
}