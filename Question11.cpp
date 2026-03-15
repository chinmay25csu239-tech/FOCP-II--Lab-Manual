#include <iostream>
using namespace std;
int main() {
    int quantity;
    float pricePerItem, totalExpense; 
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter price per item: ";
    cin >> pricePerItem;
    totalExpense = quantity * pricePerItem;
    if (quantity > 1000) {
        totalExpense = totalExpense * 0.90; 
        cout << "10% Discount applied!" << endl;
    }
    cout << "Total Expenses: " << totalExpense << endl;

    return 0;
}