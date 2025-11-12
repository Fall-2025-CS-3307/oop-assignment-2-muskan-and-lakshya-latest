#ifndef USER_H
#define USER_H
#include <string>

class User {
protected:
    std::string username;
    std::string password;
public:
    User(std::string u = "", std::string p = "") : username(u), password(p) {}
    virtual ~User() = default;

    virtual void login();
    virtual void logout();
};

#endif
