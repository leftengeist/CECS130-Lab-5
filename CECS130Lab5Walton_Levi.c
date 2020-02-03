#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Program that generates random story depending on the inputs of user
Walton Levi
Section 1
*/

/******************
Global Variables
******************/
char cFirstName[10];
char cLastName[10];
char cColor[20];
char cFavSuperHero[15];

int iAge;


/******************
Main Function
******************/
int main()
{


    printf("First Name: ");
    scanf("%s", cFirstName);
    printf("Last Name: ");
    scanf("%s", cLastName);
    printf("Age: ");
    scanf("%d", &iAge);
    printf("Favorite Color: ");
    scanf("%s", cColor);
    printf("Favorite Super Hero: ");
    scanf("%s", cFavSuperHero);

    printf("There once was a man named %s %s, they were %d years old. One day ", cFirstName, cLastName, iAge);
    iStory1();
    printf("%s explained that ", cFavSuperHero);
    iStory2();

    return 0;
}


/******************
Story Functions
******************/
int iStory1()
{
    int iRandNum = (rand() % 2);

    switch(iRandNum)
    {
    case 1:
        printf("%s was walking home from their CECS 130 class, when all of a sudden %s walked up to them and said ", cFirstName, cFavSuperHero);
        printf("\"Hi %s, I need your help, the Evil Dr. Horrible is plotting to do something truly evil.\"", cFirstName);
        break;

    case 2:
        printf("%s was walking to the store to get a %s t-shirt. All of a sudden they see %s walk into an alleyway. %s decided to follow.", cFirstName, cColor, cFirstName);
        printf("as they entered the alley, %s came face to face with their favorite hero. who told them that their menace ");
        break;
    }
}

int iStory2()
{
    int iRandNum = (rand() % 2);

    switch(iRandNum)
    {
    case 1:
        printf("Dr. Horrible was collecting all of the Uranium in the city to create a bomb. ");
        printf("%s and %s flew to Dr. Horribles lair and foiled his plot. when they were done they realized that the adventure was done.", cFirstName, cFavSuperHero);
        break;

    case 2:
        printf("Dr. Horrible was stealing all of the %s cars in the city for no apparent purpose. ", cColor);
        printf("%s went to foil Dr. Horribles scheme, when they did not return %s realized that the adventure was only beginning", cFavSuperHero, cFirstName);
        break;
    }
}
