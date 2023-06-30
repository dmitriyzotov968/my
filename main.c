#include <stdio.h>

#include "parse.h"

int main() {
  GetSymbol();
  
  if( IntegerConstant() ) {
    int p = 1;
    for( ; p < Pos-1; ++p ) printf(" ");
    printf("^\n");
    
    printf("Token -> Constant (IntegerConstant)\n");
  }
  
  return 0;

}
