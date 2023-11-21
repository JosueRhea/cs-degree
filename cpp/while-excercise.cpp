#include <iostream>

int main(){
    int counter = 1;
    float subtotal = 0;
    while (counter <= 5) {
        float price = 0;
        std::cout << "Ingrese el precio del articulo: " << counter << std::endl;
        std::cin >> price;
        subtotal += price;
        counter += 1;
    }
    std::cout << "Subtotal: " << subtotal << std::endl;

    float tax = subtotal * 0.15;
    std::cout << "Impuesto: " << tax << std::endl;

    float total = subtotal + tax;
    std::cout << "Total: " << total << std::endl;
    return 0;
}