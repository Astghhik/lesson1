

#include <iostream>

int main()

{	

   int num,rev_num;

   std::cout<<"Enter a number. "<<std::endl;

   std::cin>>num;

   rev_num=0;

   while (num != 0) {


      rev_num=(num % 10)*100 + (num/10%10)*10 + (num/100);

      if (num == rev_num) {

	   std::cout<<"Number is a palindrome."<<std::endl;

       }

        else {

	   std::cout<<"Error."<<std::endl;

       }

      std::cin >> num; 

   }

    return 0;

}	


