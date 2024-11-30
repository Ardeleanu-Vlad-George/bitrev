#ifndef _BITS_H_
#define _BITS_H_

/**
    \file bits.h
    \brief Three functions are defined for three binary operations.
    1. Computing the length of the binary form;
    2. Reversing the bits of a number from left to right;
    3. Building the string representation of a binary form.
*/


/**
    \brief Returns the length of the binary form.

    This function returns the number of bits needed to represent the argument.
    It is equivalent to determining the exponent of the biggest power of 2 
    smaller than, or equal to, the given number.
    @param number [in] Number for which to compute the length of the binary form
*/
unsigned int getBitLen(unsigned int number);

/**
    \brief Return the bit reversed version of the first argument.
    
    The fist argument represents the value that will be reversed from 
    left to right. The second one is the _length_ of the binary form.

    The user is expected to give a proper value for _length_ in order for 
    the function to compute properly.
*/
unsigned int getBitRev(unsigned int number, unsigned int length);

/**
    \brief Returns a C string that represents the binary form of _number_.

    Allocate and return a string that represents the first argument in binary form.

    Most Significant Bit (__MSB__) is in the left, Least Significant Bit (__LSB__) is 
    in the right.

    The second argument is the length of the binary form:
    - if longer than what is strictly needed, zeros are used for padding to the right;
    - if shorter than what is strictly needed, the given bits start with __LSB__.
*/
char* getStrBitRepr(unsigned int number, unsigned int length);

#endif//_BITS_H_
