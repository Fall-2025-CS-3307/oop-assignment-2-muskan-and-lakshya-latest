#ifndef DB_H
#define DB_H
#include "Product.h"
#include "Order.h"
#include <vector>

class DB {
    DB() = default;
    DB(const DB&) = delete;
    DB& operator=(const DB&) = delete;
public:
    static DB& instance() {
        static DB inst;
        return inst;
    }

    std::vector<Product> products;
    std::vector<Order> orders;
};
#endif

