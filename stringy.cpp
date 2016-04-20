#include <string>
#include <iostream>
#include <cstdio>

int main() {
  std::string bar("Hello footpad!");
  std::cout << bar << "\n";

  char *nothing;
  *nothing = '\0';
}
