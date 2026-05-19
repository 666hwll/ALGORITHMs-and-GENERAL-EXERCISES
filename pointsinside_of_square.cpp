#include <iostream>
#include <random>

struct Point
{
    double x;
    double y;
};

bool isInsideCircle(double x, double y, double radius)
{
    return (x * x + y * y) <= (radius * radius);
}

double getPercentage(int dotsInCircle, int overallDots)
{

    return ((dotsInCircle / overallDots) * 100);
}

double randint(double min, double max) {
    static std::random_device rd;
    static std::mt19937_64 gen(rd());
    
    std::uniform_real_distribution<> dist(min, max);
    
    return dist(gen);
}

int main()
{
    double radius = 0;
    int overallDots = 0;
    double lengthOfSquare = 0;
    int goodDots;
    Point p;

    std::cout << "Type in a radius:\t";
    std::cin >> radius;
    std::cout << "Type in the overall amount of Dots:\t";
    std::cin >> overallDots;
    std::cout << "Type in the length of the side of the square:\t";
    std::cin >> lengthOfSquare;
    for(int i = 0; i < overallDots; i++) {
        p.x = randint(0, lengthOfSquare);
        p.y = randint(0, lengthOfSquare);

        if(isInsideCircle(p.x, p.y,radius)) {
            goodDots++;
        }
    }
    double per = getPercentage(goodDots,overallDots);

    return 0;
}