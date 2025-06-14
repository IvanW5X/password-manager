// Function definitions for Account class

#include "account.h"

Account::Account() { std::cout << "Account Created with no data!\n"; }

Account::Account(std::string service, std::string username, std::string password)
    : _service(service), _username(username), _password(password) {}

void Account::printAccountInfo() const {
  std::cout << "Service: " << this->_service << "\n"
            << "Username: " << this->_username << "\n"
            << "Password: " << this->_password << "\n";
}

void Account::setService(std::string service) {
  if (service != this->_service)
    this->_service = service;
}

void Account::setUsername(std::string username) {
  if (username != this->_username)
    this->_username = username;
}

void Account::setPassword(std::string password) {
  if (password != this->_password)
    this->_password = password;
}

// Getters
std::string Account::getService() const { return this->_service; }
std::string Account::getUsername() const { return this->_username; }
std::string Account::getPassword() const { return this->_password; }
