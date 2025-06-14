// Function definitions for PasswordManager class

#include "password-manager.h"

PasswordManager::PasswordManager() {
  std::cout << "Password Manager created with no data!\n";
}

PasswordManager::PasswordManager(
    std::unordered_map<std::string, Account> services)
    : _services(services) {}
