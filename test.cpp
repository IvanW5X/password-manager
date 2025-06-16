// Testing playground for Password Manager project

#include "password-manager.h"
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc < 3) {
    std::cout << "Invalid arguments. Usage: " << argv[0]
              << " <Master-Key> <Vault-File-Name>\n";
    return 1;
  }
  PasswordManager *pm = new PasswordManager();

  if (pm == nullptr) {
    std::cout
        << "System Error: Memory Allocation for PM object failed\nExiting..."
        << std::endl;
    return 1;
  }

  return 0;
}