#include <iostream>
#include <string>

using namespace std;

class ShopItemOrder {
public:
    
    ShopItemOrder()
    {
        
    }
    
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
    
    void setOrders(int Items){;
        this->itemsOrdered = Items;
    }
    
    int getOrders(){
        return itemsOrdered; 
    }
    
    void thankYou(){
        cout << "You're order of " << name << " cost " << price << std::endl;
        cout << "You're total price is " << totalPrice;
    }
    
    double total()
    {
       totalPrice = totalPrice + price; 
    }
    
private:
    double totalPrice;
    int itemsOrdered;
    double price;
    string name;
};

int main(void) {
    ShopItemOrder Order1;
    
    Order1.setOrders(1);
    Order1.setName("Pickle");
    Order1.setPrice(1.15);
    Order1.total();
    
    Order1.thankYou();
    
}

