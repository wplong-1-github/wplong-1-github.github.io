#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item item, sum;

  std::cout << "Please input the transaction (press Ctrl-d to end)" << std::endl;
  while (std::cin >> item) 
    sum = sum + item;

  std::cout << "The sum of the transaction is" << std::endl;
  std::cout << sum << std::endl;

  return 0;
}
