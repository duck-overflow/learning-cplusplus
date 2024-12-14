#include <iostream>

int main() {

  // 1.4

  std::cout << "Hello World!\n";

  const int x = 17;
  const double width = 0.4;

  const int y = 0;
  // const int z { 7.5 }; -> wäre Fehler
  const int b = {7};
  const int a(5);
  double input = 7.3; // Warnung, weil nicht genutzt wird
  [[maybe_unused]] double maybe_input = 4.5; // Keine Warnung

  std::cout << (x + width);
  std::cout << "\n";
  std::cout << y + b;
  std::cout << a << "\n";

  // 1.5
  std::cout << "Hello" << " world!" << " With multiple <<" << std::endl;

  int in;
  std::cin >> in;
  std::cout << "Du hast " << in << " Eingegeben \n";

  int uno;
  int dos;

  std::cout << "Gib 2 Zahlen, getrennt durch ein Leerzeichen ein! \n";
  std::cin >> uno >> dos;
  std::cout << uno << " sowie " << dos;

  // 1.6

  return 0;

}
