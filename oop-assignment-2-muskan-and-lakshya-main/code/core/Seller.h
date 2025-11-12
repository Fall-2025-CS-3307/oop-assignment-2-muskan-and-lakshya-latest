#ifndef SELLER_H
#define SELLER_H
#include "User.h"

class Seller : public User {
public:
    using User::User;
    void addProduct();
};
#endif

