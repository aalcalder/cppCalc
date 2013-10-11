#ifndef traductor_h
#define traductor_h

#include <iostream>
//#include <fstream>

class Traductor {
 private:
  int x;
  
 public:
  Traductor();
  ~Traductor();
  void cabecera();
  void final();
};

extern Traductor * trad;

#endif
