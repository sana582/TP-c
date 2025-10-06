#include "Point.h"

int Point::instanceCount = 0;

Point::Point() : x(0), y(0), z(0) {
    instanceCount++;
}

Point::Point(double x, double y, double z) : x(x), y(y), z(z) {
    instanceCount++;
}

Point::Point(const Point& p) : x(p.x), y(p.y), z(p.z) {
    instanceCount++;
}

Point::~Point() {
    instanceCount--;
}

void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }
void Point::setZ(double z) { this->z = z; }
double Point::getX() const { return x; }
double Point::getY() const { return y; }
double Point::getZ() const { return z; }

void Point::saisir() {
    std::cout << "Entrer x, y, z : ";
    std::cin >> x >> y >> z;
}

void Point::afficher() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")";
}

void Point::translater(double dx, double dy, double dz) {
    x += dx;
    y += dy;
    z += dz;
}

double Point::distance(const Point& autre) const {
    return std::sqrt(std::pow(x - autre.x, 2) + std::pow(y - autre.y, 2) + std::pow(z - autre.z, 2));
}

int Point::getInstanceCount() {
    return instanceCount;
}
