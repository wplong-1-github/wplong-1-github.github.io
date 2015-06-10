#include <iostream>

int main()
{
  int int1, int2, temp;

  std::cout << "Please input two integers" << std::endl;
  std::cin >> int1 >> int2;

  if (int1 > int2)
    {
      temp = int1;
      int1 = int2;
      int2 = temp;
    }

  std::cout << "The number in the range:" << std::endl;

  while (int1 <= int2)
    {
      std::cout << int1 << std::endl;
      int1++;
    }

  return 0;
}
