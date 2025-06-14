// Header file for PasswordManager class

#include <iostream>
#include <string>
#include <unordered_map>
#include <random>
#include "account.h"

class PasswordManager {
private:
  std::unordered_map<std::string, Account> _services;

public:
  PasswordManager();
  PasswordManager(std::unordered_map<std::string, Account> services);
  void addAccount(Account newAccount);
  void removeAccount(std::string service);
  void printAccounts() const;
  std::string encrypt();
  std::string decrypt();
  std::string generatePassword(uint8_t length);
};