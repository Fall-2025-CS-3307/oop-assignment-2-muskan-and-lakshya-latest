#pragma once
#include <string>
#include "User.h"
#include "Buyer.h"
#include "Seller.h"

class UserFactory {
public:
    static User* createUser(const std::string& type) {
        if (type == "buyer") {
            return new Buyer();
        } else if (type == "seller") {
            return new Seller();
        }
        return nullptr;
    }
};
