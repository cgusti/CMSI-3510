#include <stdio.h>
#include <stdlib.h>
char main(int argc, char * argv[] ) {
    
    char name[40];
    int age;
    int classYear;
    int birthYear;
    char countryofBirth[10];
    int zipCode;


    printf("\nName: ");
    scanf("%s", &name);


    printf("\nAge: ");
    scanf("%d", &age);


    printf("\nClass Year: ");
    scanf("%d", &classYear);


    printf("\nBirth Year: ");
    scanf("%d", &birthYear);


    printf("\nCountry Of Birth: ");
    scanf("%s", &countryofBirth);

  
    printf("\nZipcode: ");
    scanf("%d", &zipCode);


    //printing out summary of all inputs
    printf("\nName: %s", name);
    printf("\nAge: %d", age);
    printf("\nClass Year: %d", classYear);
    printf("\nBirth year: %d", birthYear);
    printf("\nCountry Of Birth: %s", countryofBirth);
    printf("\nZip Code: %d\n", zipCode);
    

}