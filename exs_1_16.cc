#include <iostream>

int main()
{
  int num, sum=0;

  std::cout << "Please input the numbers to sum, press Ctrl-d to stop" << std::endl;
  while (std::cin >> num)
    sum += num;

  std::cout << "The sum is " << sum << std::endl;

  return 0;
}
