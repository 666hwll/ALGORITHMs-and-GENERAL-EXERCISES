#include <iostream>

struct Sensor {
    int ID;
    float temperature;
    bool active;
};

void kalibriere_s(Sensor* s, float offset) { // just adds the offset to the temperature
    s -> temperature += offset; 

}
void tausche_s(Sensor* a, Sensor* b) { //swaps the pointer
    Sensor* swap;
    swap = a;
    a = b;
    b = swap;
    //swap = 0;
}
void deaktiviere_s(Sensor* s) { // deaktivates the sensor over 'active'
    s -> active = false;
}

Sensor* finde_min_temp(Sensor* arr, int n); // returns the ID and the temperature of the coldest sensor

int main() {
    Sensor sensoren[3]; // assuming 3 sensors

    for (int i = 0; i < 3; i++) {
        sensoren[i].ID = 101 + (int)i;
        sensoren[i].temperature = 18 + (int)i;
        sensoren[i].active = true;
    }
    for (int i = 0; i <= 3; i++) {
        std::cout << "ID fuer " << i << " =" << sensoren[i].ID << "\n";
        std::cout << "Temperatur fuer " << i << " =" << sensoren[i].temperature << "\n";
        std::cout << "Status fuer " << i << " =" << sensoren[i].active << "\n";
    }
    kalibriere_s(&sensoren[0], 1.5);
    std::cout << sensoren[0].temperature << "\n";
    tausche_s(&sensoren[1], &sensoren[2]); // doesn't work yet
    deaktiviere_s(&sensoren[2]);

    return 0;
}

/*
Reflexionsfragen
• Warum verwenden wir -> statt . bei Pointern auf Strukturen?
• Was passiert, wenn du *s.temperatur schreibst? Warum ist das falsch?
• Wie kannst du mit einem Pointer auf ein Array von Sensoren durch alle Sensoren iterieren?
*/