#include <iostream>
#include <string>
#include <random>
#include <time.h>

struct circle {
    int radius;
    double x;
    double y;
};

bool findOverlappingCircle() {

    return false;
}


void inputwOutput(std::string somestring, double number) {
    std::cout << somestring;
    std::cin >> number;
}

int main() {
    srand(time(NULL));
    circle userCircle;
    int n = 0;
    double r = 0;
    double a = 0; 
    inputwOutput("Type in the amount of random generated Circles: \n", n);
    inputwOutput("Type in the radius: \n", r);
    inputwOutput("Type in the point of the central point: \n", a);

    double arr[n];
    //double Array[n][n];
    //std::vector storage(n);

    for(int i = 0; i < n; i++) {
        double x =((double)rand() / RAND_MAX) * 2 * a - a;
        double y = ((double)rand() / RAND_MAX) * 2 * a - a;
        int radius = ((double)rand() / RAND_MAX) * r;
        Array[i][i][i] = {{x}, {y}, {radius}};
        
    }
    userCircle.radius = r;
    userCircle.x = (-a, -a);
    userCircle.y = (a, a);
    

    return 0;
}

/*
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// Struktur für einen Kreis
struct Circle {
  double x, y; // Mittelpunkt
  double radius; // Radius
};

// Funktion zur Berechnung, ob zwei Kreise sich überlappen
bool doOverlap(const Circle& c1, const Circle& c2) {
  double dx = c1.x - c2.x;
  double dy = c1.y - c2.y;
  double distance = sqrt(dx * dx + dy * dy);
  return distance < (c1.radius + c2.radius);
}

// Funktion zum Generieren eines zufälligen Double-Wertes im Bereich [min, max]
double randomDouble(double min, double max) {
  return min + static_cast<double>(rand()) / RAND_MAX * (max - min);
}

// Ausgabeformat für einen Kreis
void printCircle(const Circle& c, int index) {
  cout << "Kreis " << index << ": Mittelpunkt (" 
  << fixed << setprecision(2) << c.x << ", " << c.y 
  << "), Radius = " << c.radius << endl;
}

int main() {
  srand(static_cast<unsigned>(time(0)));

  int n;
  double a, r;

  // Eingabe von Konsole
  cout << "Anzahl der Kreise (n): ";
  cin >> n;
  cout << "Grenze a (Quadrat von (-a, -a) bis (a, a)): ";
  cin >> a;
  cout << "Maximaler Radius r: ";
  cin >> r;

  vector<Circle> circles;

  // Generiere n zufällige Kreise
  for (int i = 0; i < n; ++i) {
  Circle c;
  c.x = randomDouble(-a, a);
  c.y = randomDouble(-a, a);
  c.radius = randomDouble(0.1, r); // Radius darf nicht 0 sein
  circles.push_back(c);
  }

  // Ausgabe aller Kreise
  cout << "\n--- Generierte Kreise ---\n";
  for (int i = 0; i < n; ++i) {
  printCircle(circles[i], i);
  }

  // Überprüfe Überlappungen
  cout << "\n--- Überlappende Kreise ---\n";
  for (int i = 0; i < n; ++i) {
  cout << "Kreis " << i << " überschneidet sich mit: ";
  bool found = false;
  for (int j = 0; j < n; ++j) {
  if (i != j && doOverlap(circles[i], circles[j])) {
  cout << j << " ";
  found = true;
  }
  }
  if (!found) cout << "keinem Kreis";
  cout << endl;
  }

  return 0;
}

*/