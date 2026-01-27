#include <iostream>

int main() {
    int onenumber = 1;
    int secondnumber = 1;

    do {std::cout << "Bitte eine Zahl eingeben: ";
        std::cin >> onenumber;
    } while(onenumber == 0);


    do {std::cout << "Bitte eine andere Zahl eingeben: ";
        std::cin >> secondnumber;
    } while(secondnumber == 0);

    for(int i=0; i<101;i++) {
        if((i % onenumber) == 0 && (i % secondnumber) == 0){
            std::cout << "Folgende Zahlen sind teilbar: " << i << std::endl;
        }
    }

    return 0;
}
