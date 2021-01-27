#include <iostream>

using namespace std;

int convertion( int number , int base);

int main()
{
    int integer;

    int base;

    startAgain:

    cout << "Enter a positive integer: " ;

    cin >> integer;

    if (integer <0)
    {
        cout << "Error Try Again \n" ;

        goto startAgain;
    }

    baseAgain:

    cout << "Enter a value for the base: " ;

    cin >> base;

     if (base !=2)
    {
        cout << "Error Try Again \n" ;

        goto baseAgain;
    }

    cout << integer << " = " ;

    cout << convertion(integer,base) << " base " << base;

    return 0;
}

/// END MAIN


int convertion( int number , int base)
{
    /// array to store binary number

    static int binNum [100];

    /// counter for binary num

    int countt = 0;

    while( number!=0 )
    {
        binNum[countt] = number % base;

        number = number / base;

        countt++;
    }

    /// Printing the binary number array in reverse order

    int j = countt-1;

    for( ; j > 0 ; j--)
    {
        cout << binNum[j];
    }

    int result = binNum[j];

    return result;
}

