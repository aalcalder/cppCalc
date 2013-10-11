#include <iostream>
#include <sstream>
#include <string>
#include "calcex.h"
#include "calculator.h"
#include "traductor.h"
#define EOF ""

using namespace std;

Calculator* calc;
Traductor* trad;
int main(int argc, char* argv[]) {
   string line;
   string arg;

   trad = new Traductor();
   //delete trad;
   if(argc > 1){
     arg = argv[1];
   } 
     
   if (arg == "-i"){
     cout << "> ";
     while(getline(cin, line)){
       try{
	 if(line == EOF)return 0;
	 calc = new Calculator();
	 int result = calc->eval(line, true);
	 cout << "= " << result << endl;
	 cout << "> ";
	 delete calc;
       }catch(Exception e){
	 cout << "> ";
       }

     }
   }else{
   try {
     
      cout << "Please enter a calculator expression: ";

      getline(cin, line);
      
      trad->cabecera();
      calc = new Calculator();

      int result = calc->eval(line);

      cout << "The result is " << result << endl;

      delete calc;
      

   }
   catch(Exception ex) {
      cout << "Program Aborted due to exception!" << endl;
   }
   }
   trad->final();
   delete trad;
}
   
