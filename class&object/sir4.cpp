    //Product

#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    // Parameterized constructor
    Product(int id, const string& name, float price, int quantity)
        : productId(id), productName(name), productPrice(price), quantityInStock(quantity) {}

    void displayProduct() const {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: Rs" << productPrice << endl;
        cout << "Quantity in Stock: " << quantityInStock << endl;
    }

private:
    
    long int productId;
    string productName;
    float productPrice;
    int quantityInStock;
};

int main() {
    
    
    Product laptop(138734, " Mac Air M2", 150000.00, 500);

    // Display product information
    laptop.displayProduct();

    Product refrigerator(123444, " Wirlpool ", 32000.00, 612);

    // Display product information
    refrigerator.displayProduct();
 
    Product airconditioning(7568398, " Godrej ", 29000.00, 50);

    // Display product information
    airconditioning.displayProduct();


    


    return 0;
}

    
