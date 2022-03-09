#include <stdio.h>

int main() //Main Function where the program starts.
{
    printf("\n");
    printf("Ounces to Milliliters Converter\n");
    float ounces, milliliters; //Declaring float variables for conversion.
    printf("Enter weight in ounces: ");
    scanf("%f", &ounces); //Gets Input from the user and will be stored in the ounces variable.
    milliliters = ounces * 29.574; //Formula for the conversion.
    printf("To convert ounces to milliliters, multiply %.2f ounces to 29.574 = %f milliliters.\n", ounces, milliliters);
    printf("Therefore, %.2f ounces is equal to %.2f milliliters.\n", ounces, milliliters);
    return;
}
