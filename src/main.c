#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bits.h"

unsigned int getDecLen(unsigned int nr){
  int len=0;
  if(nr == 0)
    return 1;
  for(; 0 < nr; nr/=10, len++);
  return len;
}

int main(int argc, char *argv[]){
    
    if(argc != 2){
        printf("\tERR: Give the number as a CLA.\n");
        return -1;
    }

    //0 - attribute before reversal, 1 - after reversal
    unsigned int DecLenNrCol, DecLenBitLenNrCol;
    unsigned int Number[2], BitLen[2];
    char *Command, *Repr[2];

    Number[0] = atoi(argv[1]);
    BitLen[0] = getBitLen(Number[0]);

    Number[1] = getBitRev(Number[0], BitLen[0]);
    BitLen[1] = getBitLen(Number[1]);

    Repr[0] = getStrBitRepr(Number[0], BitLen[0]);
    Repr[1] = getStrBitRepr(Number[1], BitLen[0]);
    unsigned int temp;
    DecLenNrCol=getDecLen(Number[0]);
    temp=getDecLen(Number[1]);
    DecLenNrCol=temp>DecLenNrCol?temp:DecLenNrCol;
    DecLenBitLenNrCol=getDecLen(BitLen[0]);
    temp=getDecLen(BitLen[1]);
    DecLenBitLenNrCol=temp>DecLenBitLenNrCol?temp:DecLenBitLenNrCol;

    Command = (char*) calloc(1001, 1);

    printf(
        "%*d    %s    %*d\n%*d    %s    %*d\n",
        DecLenNrCol, Number[0], Repr[0], DecLenBitLenNrCol, BitLen[0],
        DecLenNrCol, Number[1], Repr[1], DecLenBitLenNrCol, BitLen[1]
    );

    free(Repr[0]);
    free(Repr[1]);

    return 0;
}
