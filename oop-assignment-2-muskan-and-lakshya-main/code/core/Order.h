#ifndef ORDER_H
#define ORDER_H
#include <string>

struct Order {
    int id;
    int buyerId;
    double total;
    std::string status;
};
#endif

