#include <iostream>
int main()
{
struct person
               {
		    std::string name;
		    int age;

	       } p1,p2,p3;

               p1.name = "Bob";
	       p1.age  = 16;
               p2.name = "Ann";
               p2.age  = 25;
	       p3.name = "David";
               p3.age  = 32;

	       std::cout<<"The oldest person is "<<std::endl;

	        if (p1.age > p2.age && p1.age > p3.age) 
			std::cout<<p1.name<<" "<<p1.age<<std::endl;
	        else if (p2.age > p1.age && p2.age > p3.age) 
			std::cout<<p2.name<<" "<<p2.age<<std::endl;
	        else std::cout<<p3.name<<" "<<p3.age<<std::endl;
		 
	      return 0;
}	
