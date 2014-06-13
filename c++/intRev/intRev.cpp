#include<iostream>

int main()
{
  int number, tmp, result=0;
  std::cout<<"Enter a number to be reversed: ";
  std::cin>>number;
  do
  {
    tmp = number % 10;
    result = (result * 10) + tmp;
    number = number / 10;
  }while (number > 0);
  std::cout<<std::endl<<result<<std::endl;
  return 0;
}  
