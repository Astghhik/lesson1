#include <iostream>
int main()
{
      std::string mystr;
      std::cout<<"Enter a sentence:"<<std::endl;
      std::getline(std::cin,mystr);
      std::string shortest_Word = "";
      std::string current_Word = "";
      bool first_Word = true;
      for(int i=0;mystr.length()>i;i++) {
	      if (mystr[i] == ' ') {
		      if(first_Word){
			      shortest_Word=current_Word;
				first_Word=false;
		      }	
		      else  if(current_Word.length() < shortest_Word.length()) {
			      shortest_Word = current_Word;
		      }
		      current_Word = "";
	      }
	      else {
		      current_Word += mystr[i];
	      }
           }
          
	      if (current_Word.length() < shortest_Word.length()){
		      shortest_Word=current_Word;
	      }
	      std::cout<<"The shortest word is "<<shortest_Word<<std::endl;
	      
	      return 0;
      	     

}

