#include <iostream>

int main() {
    int divident = 0;
    int divisor = 0;
    double moduloSolu = 0;

    std::cout << "Bitte Divident eingeben: ";
    std::cin >> divident;

    std::cout << "Bitte Divisor eingeben: ";
    std::cin >> divisor;

    if(0 != divisor) {
        moduloSolu = divident % divisor;
        double leftovers = divident / divisor ;
        std::cout << leftovers << "\nRest: " << moduloSolu; 
    } else {
        std::cerr << "Division durch Null ...";
    }
    

    return 0;
}
