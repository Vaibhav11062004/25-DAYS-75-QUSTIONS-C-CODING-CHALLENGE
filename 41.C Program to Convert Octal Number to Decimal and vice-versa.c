// Example.1=Program to Convert Decimal to Octal
#include <stdio.h>
#include <math.h>

// function prototype
int convertDecimalToOctal(int decimalNumber);

int main() {

    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("%d in decimal = %d in octal", decimalNumber, convertDecimalToOctal(decimalNumber));

    return 0;
}

// function to convert decimalNumber to octal
int convertDecimalToOctal(int decimalNumber) {
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}
//Example 2: Program to Convert Octal to Decimal

#include <stdio.h>
#include <math.h>

// function prototype
long long convertOctalToDecimal(int octalNumber);

int main() {

    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}

// function to convert octalNumber to decimal
long long convertOctalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0) {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}
#include <stdio.h>
#include <math.h>

// function prototype
long long convertOctalToDecimal(int octalNumber);

int main() {

    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}

// function to convert octalNumber to decimal
long long convertOctalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0) {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}

//Example 2: Program to Convert Octal to Decimal

#include <stdio.h>
#include <math.h>

// function prototype
long long convertOctalToDecimal(int octalNumber);

int main() {

    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}

// function to convert octalNumber to decimal
long long convertOctalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0) {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}

//Example 3: Check for Octal Number and Convert it to Decimal

#include <stdio.h>
#include <math.h>

// function prototypes
int checkOctal(int);
long long convertOctalToDecimal(int);

int main() {
    
    int octalNumber;
    int condition;

    // repeat loop as long as user
    // gives a non-octal number     
    do {
        printf("Enter an octal number: ");
        scanf("%d", &octalNumber);

        // check if number is octal
        condition = checkOctal(octalNumber);
        
        if (!condition) {
            printf("%d is not an octal number!\n", octalNumber);
        }
    } while (condition == 0);
    
    printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}

// function to check octal number
int checkOctal(int octalNumber) {
    int remainder;
    
    // check each digit of input number
    while(octalNumber != 0) {
        remainder = octalNumber % 10;

        // return 0 if a digit is 8 or 9
        if (remainder >= 8) {
            return 0;
        }
        
        octalNumber/= 10;
    }
    
    // return 1 if number is octal
    return 1;
}

// function to convert octalNumber to decimal
long long convertOctalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0) {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}
