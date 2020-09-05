#include<iostream>
#include <stdio.h>

float calculateCharges( float hours );

float charge;

int main()
{
    int customer;
    float one;
    float two;
    float three = 0;
    float hours;

    for( customer = 1; customer <= 3; customer++ ) {
        printf( "Enter customer #%d parking hours: ", customer );
        scanf( "%f", &hours );

        if( customer == 1 )
            one = hours;
        else if( customer == 2 )
            two = hours;
        else
            three = hours;
    }
    printf( "%s%10s%12s", "Car", "Hours", "Cost" );
    printf( "\n%d%12.1f%12.1f", 1, one, calculateCharges( one ) );
    printf( "\n%d%12.1f%12.1f", 2, two, calculateCharges( two ) );
    printf( "\n%d%12.1f%12.1f", 3, three, calculateCharges( three ) );
    printf( "\n%s%8.1f%12.1f", "TOTAL", one + two + three, calculateCharges( one ) + calculateCharges( two ) + calculateCharges( three ) );
}

float calculateCharges( float hours )
{
    int h = hours;
    charge = 2.0;

    if( hours > 0 ) {
        if( hours <= 3 )
            return charge;

        else if( hours <= 24 ) {
            while( h > 3 ) {
                charge += .5;
                h--;
                if( charge >= 10 )
                    charge = 10;
            }
            return charge;
        }
    }
    else
        printf( "\nThe amount of time entered is not supported." );
}
