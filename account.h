// Header file for Account class

#include <iostream>
#include <string>

class Account {
private:
  std::string _service;
  std::string _username;
  std::string _password;

public:
  Account();
  Account(std::string service, std::string username, std::string password);
  void printAccountInfo() const;
  void updateService(std::string service);
  void updateUsername(std::string username);
  void updatePassword(std::string password);
};
