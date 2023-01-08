#include <stdio.h>
#include "../auth/auth.c"




int StartMenu() {

    int StartInput;

    printf("Hello Bank\n\n");
    printf("1-You Hava Not Account? (Register): \n\nYou Hava a Account? (Login)\n");
    scanf("%d", &StartInput);

    switch (StartInput)
    {
    case 1:
        Login();
        break;
    
    case 2:
        Register();
        break;

    default:
        printf("Somthing Wrong!");
    }

    return 0;
}