#include <iostream>


int main()

{	

   int num;
   int sum;

   sum=0;

   std::cout<<"Enter a number:"<<std::endl;

   std::cin>>num;

   while (num != 0){

      int digit=num % 10;

      sum += digit;

      num /= 10;

    }

    std::cout<<" "<<sum<<std::endl;   

    return 0;

}	


