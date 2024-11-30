#include "bits.h"
#include <stdlib.h>

char* getStrBitRepr(unsigned int nr, unsigned int bitLen){
    char *bitRepr;
    unsigned int it=bitLen-1;
    
    bitRepr=(char*)calloc(bitLen+1,1);
    
    while(it < (unsigned int)-1){
        bitRepr[it--] = nr%2 ? '1' : '0';
        nr/=2;
    }

    return bitRepr;
}

unsigned int getBitRev(unsigned int nr, unsigned int bitLen){
    unsigned int it, revNr=0;

    for(it=0; it < bitLen; it++){
        revNr <<= 1;
        revNr |= (nr & 1);
        nr >>= 1;
    }

    return revNr;
}

unsigned int getBitLen(unsigned int nr){
    unsigned int it, pwr;

    for(it=1, pwr=1; it<=nr; pwr++, it*=2);

    return pwr > 1 ? pwr-1 : pwr;
}
