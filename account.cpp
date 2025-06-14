// Function definitions for Account class

#include "account.h"

Account::Account() {}

Account::Account(std::string service, std::string username, std::string password)
    : _service(service), _username(username), _password(password) {}