#include <iostream>
#include <algorithm>
class Human 
{
     public:
	std::string name;
        int age;
        bool operator()(Human const & a,Human const & b)
	{	
	return a.age < b.age;
	};
	
};

int main()
{
	Human h1,h2,h3,h4,h5;
	
	h1.name = "Ann";
        h1.age = 24;

        h2.name = "David";
	h2.age = 34;
	h3.name = "Emma";
	h3.age = 18;

	h4.name = "Jack";
        h4.age = 16;

	h5.name = "Bob";
        h5.age = 27;

	Human arr[5] = {h1,h2,h3,h4,h5};

	std::sort(arr,arr + 5,Human());

	for(int i=0;i<5;i++)
	{
	  std::cout<<arr[i].name<<" "<<arr[i].age<<" ";
		std::cout<<std::endl;
	}
	return 0;
}
