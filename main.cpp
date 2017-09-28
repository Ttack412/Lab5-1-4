#include <iostream>
#include <string>

using namespace std;

class ShopItemOrder {
public:
    
    //constructor that asks for needed information
    ShopItemOrder(string Name, double itemsOrdered, double Price)
    {
        this->name = Name;
        this->itemsOrdered = itemsOrdered;
        this->price = Price;
    }
    
    
    //ways to get and reset different variables
    void setName(string Name){
        this->name = Name; 
    }
    
    string getName(){
        return name; 
    }
    
    void setPrice(double Price){
        this->price = Price;  
    }
    
    double getPrice(){
        return price;  
    }
    
    void setOrders(double Items){;
        this->itemsOrdered = Items;
    }
    
    double getOrders(){
        return itemsOrdered; 
    }
    
private:
    double itemsOrdered;
    double price;
    string name;
};

int main(void) {
    
    //creates the orders
    ShopItemOrder Order1("Books", 2, 2.00);
    ShopItemOrder Order2("Pens", 5, 1.00);
    ShopItemOrder Order3("Waters", 3, 1.00);
    
    //adds the orders to a vector
    ShopItemOrder Orders[3] = {Order1, Order2, Order3};
    
    //size of the vector
    int n = sizeof(Orders) / sizeof(Orders[0]); 
    //holds all the total prices for in individual orders
    int pricePerOrder[3];
    //holds the total prices for everything
    int totalPrice = 0;
    
    //gets the prices
    for(int i = 0; i < 3; i++)
    {
        pricePerOrder[i] = Orders[i].getPrice() * Orders[i].getOrders();
        totalPrice = totalPrice + pricePerOrder[i];
    }
    
    //outputs all order information
    for(int i = 0; i < n; i++)
    {
        cout << "You're order of " << Orders[i].getOrders() << " " << Orders[i].getName() << " costs $" << pricePerOrder[i] << endl;
    }
    
    cout << "The total price of all your orders are $" << totalPrice;
}

