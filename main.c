#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Conversion Table \n");
    printf("Pounds / Kilograms / Miles / Kilometers\n");
    printf("---------------------------\n");

    float pounds , kilograms , miles , kilometers;

    for (pounds = 10; pounds <= 100; pounds += 10){
        kilograms = pounds * 0.453592; // Conversion factor for pounds to kilograms
        miles = pounds * 0.621371; // Conversion factor for miles to kilometers
        kilometers = miles * 1.60934;
        printf("%. 2f 1bs / %.2f kg / %.2f mi / %.2f km \n ", pounds , kilograms , miles, kilometers);
    }
    return 0;
}
