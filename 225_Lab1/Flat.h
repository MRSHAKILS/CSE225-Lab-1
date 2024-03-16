#ifndef FLAT_H
#define FLAT_H

class Flat {
private:
    double width;
    double length;
    double pricePerSqrFt;

public:
    Flat(double w, double l, double p);
    double getTotalPrice() const;
};

#endif
