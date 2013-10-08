#include <iostream>
#include <sstream>
#include <string>
#include "calcex.h"
#include "calculator.h"

using namespace std;

Calculator* calc;

int main(int argc, char* argv[]) {
   string line;
   string arg;
   string EOF = "";
   if(argc > 1){
     arg = argv[1];
   }
   if (arg == "-i"){
     try {
       cout << "> ";
       while(getline(cin, line)){
	 //cout << "> " ;
	 if(line == EOF)return 0;
	 calc = new Calculator();
	 int result = calc->eval(line);
	 cout << "= " << result << endl;
	 cout << "> ";
	 delete calc;
       }
       return 0;
     }catch(Exception e){
       cout << "Program aborted due to exception!" << endl;
     }
   }else{
   try {

      cout << "Please enter a calculator expression: ";

      getline(cin, line);
      // line + '\n';

      calc = new Calculator();

      int result = calc->eval(line);

      cout << "The result is " << result << endl;

      delete calc;

   }
   catch(Exception ex) {
      cout << "Program Aborted due to exception!" << endl;
   }
   }
}
   
