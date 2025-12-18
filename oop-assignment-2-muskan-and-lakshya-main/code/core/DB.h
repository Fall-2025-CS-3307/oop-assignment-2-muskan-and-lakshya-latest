#pragma once
#include <vector>
#include "Product.h"
#include "User.h"
#include "Order.h"

class DB {
private:
    DB();                        // private ctor
public:
    static DB& getInstance();    // Singleton accessor

    // delete copy/move
    DB(const DB&) = delete;
    DB& operator=(const DB&) = delete;

    // your existing methods:
    void addProduct(const Product& p);
    std::vector<Product> getProducts() const;
    // etc.
};


