#include "Flat.h"

Flat::Flat(double w, double l, double p) {
    width = w;
    length = l;
    pricePerSqrFt = p;
}

double Flat::getTotalPrice() const {
    double area = width * length;
    return area * pricePerSqrFt;
}
