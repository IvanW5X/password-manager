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
  void setService(std::string service);
  void setUsername(std::string username);
  void setPassword(std::string password);
  std::string getService() const;
  std::string getUsername() const;
  std::string getPassword() const;
};
