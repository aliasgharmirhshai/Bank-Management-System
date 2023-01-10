#include <stdio.h>
#include "../auth/auth.c"
#include <stdlib.h>


int ClearScreen() {

    #ifdef _WIN32
       system("cls");
    #else
        system("clear");
    #endif

    return 0;
}


int StartMenu() {

    int StartInput;

    printf("\n\n\t\tHello Bank\n\n");
    printf("\t1-You Hava Not Account? (Register) \n\n\t2-You Hava a Account? (Login)\n :> ");
    scanf("%d", &StartInput);

    switch (StartInput)
    {
    case 1:
        Register();
        break;
    
    case 2:
        Login();
        break;

    default:
        printf("Somthing Wrong!");
    }



    return 0;
}