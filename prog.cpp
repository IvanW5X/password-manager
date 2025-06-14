// Driver file for password manager program

#define QUIT "exit"

#include <iostream>

int main(int argc, char* argv[]) {
  if (argc < 3) {
    std::cout << "Invalid arguments. Usage: " << argv[0] << " <Master-Key> <Vault-File-Name>\n";
    return 1;
  }
  // validate file name & that it exists
  // if valid, validate master key

  // read file and add accounts to Password manager object
  // program loop until user exits 

  return 0;
}
