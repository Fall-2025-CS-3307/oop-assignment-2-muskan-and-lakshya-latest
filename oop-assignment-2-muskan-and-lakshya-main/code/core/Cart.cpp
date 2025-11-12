#include "Cart.h"

void Cart::addItem(const Product &p) { items.push_back(p); }

double Cart::totalPrice() const {
    double total = 0;
    for (auto &p : items) total += p.price;
    return total;
}

