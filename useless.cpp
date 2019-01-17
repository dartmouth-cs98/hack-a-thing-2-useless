#include <iostream>
#include <unistd.h>

int count = 1;

void printEllipses();


int main(int argc, char *argv[]) {
  while (true) {
    std::cout << "ENTER me, baby";
    std::cin.ignore();
    if (count == 3) {
      std::cout << "Slow down cowboy\n";
      usleep(3000000);
    }
    if (count % 7 == 0) {
      std::cout << "Girl you gotta love your man\n";
      usleep(2000000);
    }
    printEllipses();
    count++;
  }
}

void printEllipses()
{
  if (count % 5 == 0) {
    int ellipses = rand() % 4 + 1;
    int back = ellipses - 1;
    for (int i = 0; i < ellipses; i++) {
      std::cout << '.';
      std::cout.flush();
      usleep(500000);
    }
    usleep(3000000);
    for (int i = 0; i < back; i++) {
      std::cout << '\b';
      std::cout.flush();
      usleep(500000);
    }
    for (int i = 0; i < ellipses; i++) {
      std::cout << '.';
      std::cout.flush();
      usleep(500000);
    }
    std::cout << '\n';
  }
  else {
    int ellipses = rand() % 8 + 1;
    for (int i = 0; i < ellipses; i++) {
      std::cout << '.';
      std::cout.flush();
      usleep(500000);
    }
   std::cout << '\n';
  }
}

