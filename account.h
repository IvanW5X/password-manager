// Header file for Account class

#include <string>

class Account {
private:
  std::string _service;
  std::string _username;
  std::string _password;
public:
  Account();
  Account(std::string service, std::string username, std::string password);
};
