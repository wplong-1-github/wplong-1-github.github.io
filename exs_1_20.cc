#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item book;

  std::cout << "Please input a set of book transaction, press Ctrl-d to end" << std::endl;
  while (std::cin >> book)
    std::cout << book << std::endl;

  return 0;
}
