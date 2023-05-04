// If ages of Ram, Shyam and Ajay are input through the keyboard,
//write a program to determine the youngest of the three


#include<stdio.h>
#include<conio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Enter age of a Ram, Shyam, Ajay : \n");
    scanf("%d %d %d", &ram, &shyam, &ajay);
    printf("Age of Ram %d\n", ram);
    printf("Age of Shyam %d\n", shyam);
    printf("Age of Ajay %d\n", ajay);
    if (ram<=shyam)
        if (ram<ajay)
            printf("Ram is Younger");
        else 
            printf("Ajay is Younger");
    else
        if (shyam<ajay)
            printf("Shyam is Younger");
        else
            printf("Ajay is Younger");
}
