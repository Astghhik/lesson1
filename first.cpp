#include <iostream>

#include <cmath>


int main()

{

     double a,b,c,D;

     std::cout<<"Enter a,b,c numbers:"<<std::endl;

     std::cin>>a>>b>>c;

     D=b*b-4*a*c;



     if (D>0) {

     double x1 = (-b + sqrt(D))/(2*a);

     double x2 = (-b - sqrt(D))/(2*a);

     std::cout<<"x1 = "<<x1<<std::endl;

     std::cout<<"x2 = "<<x2<<std::endl;

    }



     else if (D == 0) {

	 double x = -b / (2 * a);

        std::cout<<"x = "<<x<<std::endl;

     }



     else {

	     std::cout<<" no solution:"<<std::endl;

     }

	return 0;

}


			   

