// Header file for PasswordManager class

#include "account.h"
#include "utils.h"
#include <iostream>
#include <random>
#include <string>
#include <unordered_map>

class PasswordManager {
private:
  std::unordered_map<std::string, Account> _services;

public:
  PasswordManager();
  PasswordManager(std::unordered_map<std::string, Account> services);

  void addAccount(Account newAccount);
  void getAndAddAccount();
  void removeAccount(std::string service);
  void editAccount(std::string service);
  void printAccounts() const;

  std::string encrypt();
  std::string decrypt();
  std::string generatePassword(uint8_t length);
};