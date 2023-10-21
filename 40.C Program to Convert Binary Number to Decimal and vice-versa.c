//Example 1: C Program to Convert Binary Number to Decimal
// convert binary to decimal

#include <stdio.h>
#include <math.h>

// function prototype
int convert(long long);

int main() {

  long long n;

  printf("Enter a binary number: ");
  scanf("%lld", &n);

  printf("%lld in binary = %d in decimal", n, convert(n));

  return 0;
}

// function definition
int convert(long long n) {

  int dec = 0, i = 0, rem;

  while (n != 0) {

    // get remainder of n divided by 10
    rem = n % 10;

    // divide n by 10
    n /= 10;

    // multiply rem by (2 ^ i)
    // add the product to dec
    dec += rem * pow(2, i);

    // increment i
    ++i;
  }

  return dec;
}
//Example 2: C Program to convert decimal number to binary

// convert decimal to binary

#include <stdio.h>
#include <math.h>

// function prototype
long long convert(int);

int main() {
    
  int n;
  long long bin;
  
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  
  // convert to binary using the convert() function
  bin = convert(n);
  
  printf("%d in decimal =  %lld in binary", n, bin);

  return 0;
}

// function to convert decimal to binary
long long convert(int n) {

  // variable to store the result
  long long bin = 0;

  int rem, i = 1;

  // loop to convert to binary
  while (n != 0) {
    
    // get remainder of n divided by 2
    rem = n % 2;
    
    // divide n by 2
    n /= 2;
    
    // multiply remainder by i
    // add the product to bin
    bin += rem * i;
    
    // multiply i by 10
    i *= 10;
  }

  return bin;
}
   
