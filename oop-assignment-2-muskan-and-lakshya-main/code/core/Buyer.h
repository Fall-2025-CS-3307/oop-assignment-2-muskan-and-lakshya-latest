#ifndef BUYER_H
#define BUYER_H
#include "User.h"

class Buyer : public User {
public:
    using User::User;
    void addToCart();
    void checkout();
};
#endif

