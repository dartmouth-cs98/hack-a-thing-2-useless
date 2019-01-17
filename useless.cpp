#include <iostream>
#include <unistd.h>

int count = 0;

void printEllipses();

int main(int argc, char *argv[]) {
  while (true) {
    std::cout << "ENTER me, baby";
    std::cin.ignore();
    printEllipses();
  }
}

void printEllipses()
{
  int ellipses = rand() % 8 + 1;
  for (int i = 0; i < ellipses; i++) {
    std::cout << '.';
    std::cout.flush();
    usleep(500000);
  }
   std::cout << '\n';
}


