#ifndef CART_H
#define CART_H
#include "Product.h"
#include <vector>

class Cart {
    std::vector<Product> items;
public:
    void addItem(const Product &p);
    double totalPrice() const;
};
#endif

