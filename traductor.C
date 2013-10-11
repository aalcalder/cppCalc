#include "traductor.h"

using namespace std;

Traductor::Traductor() {}

Traductor::~Traductor() {}

void Traductor::cabecera(){
  cout << "Start:";
  cout << "    sp := 6" << endl;
  cout << "    uno := 1" << endl;
  cout << "    tres := 3" << endl;
  cout << "    sp := sp + uno" << endl;
  
}

void Traductor::final(){
  cout << "sp := sp - uno" << endl;
  cout << "    tmp := M[sp+1]" << endl;
  cout << "    writeInt(tmp)" << endl;
  cout << "equ tmp M[0]" << endl;
  cout << "equ tmp2 M[1]"<< endl;
  cout << "equ uno M[2]"<< endl;
  cout << "equ tres M[3]"<< endl;
  cout << "equ mem M[4]"<< endl;
  cout << "equ sp M[5]"<< endl;
  cout << "equ stack M[6]"<< endl;
}

