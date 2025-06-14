// Function definitions for PasswordManager class

#include "password-manager.h"

PasswordManager::PasswordManager() {
  std::cout << "Password Manager created with no data!\n";
}

PasswordManager::PasswordManager(
    std::unordered_map<std::string, Account> services)
    : _services(services) {}

void PasswordManager::addAccount(Account newAccount) {
  this->_services.insert({newAccount.getService(), newAccount});

  std::cout << "Added new account\n";

  return;
}

void PasswordManager::getAndAddAccount() {
  std::string service = "";
  std::string username = "";
  std::string password = "";

  std::cout << "Side Note: Do not use space characters in your username or "
               "password. If entered, spaces will be ignored\n\n"
            << "Enter Service Name: ";
  std::getline(std::cin, service);

  std::cout << "Enter Username: ";
  std::getline(std::cin, username);

  password = getPassword();

  Account newAccount = Account(service, username, password);

  std::cout << "Is this information correct?\n(y/n)\n";
  newAccount.printAccountInfo();

  std::string confirm = "";
  std::getline(std::cin, confirm);

  if (confirm == "y" || confirm == "yes")
    this->addAccount(newAccount);
  else
    std::cout << "Account was not added.\n";

  return;
}