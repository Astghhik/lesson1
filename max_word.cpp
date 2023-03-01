#include <iostream>
int main()
{
      std::string mystr;
      std::cout<<"Enter a sentence:"<<std::endl;
      std::getline(std::cin,mystr);
      std::string max_Word = "";
      std::string current_Word = "";
      for(int  i=0;mystr.length()>i;i++) {
	      if (mystr[i] == ' ') {
		      if(current_Word.length() > max_Word.length()) {
			      max_Word = current_Word;
		      }
		      current_Word = "";
	      }
	      else {
		      current_Word += mystr[i];
	      }
           }
               
	      if (current_Word.length() > max_Word.length()){
		      max_Word=current_Word;
	      }
	      std::cout<<max_Word<<std::endl;
	      
	     return 0;
}
      	
			   

