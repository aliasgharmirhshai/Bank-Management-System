#include <stdio.h>
#include <string.h>

struct AuthData
{
        char username[32], email[32], password[32], RepeatPassword[32];
};

void Login() {
        struct AuthData LoginVar;

        printf("\n\t\tLogin Page\n\n");
        printf("Enter UserName :> ");
        scanf("%s", LoginVar.username);
        printf("\nEnter Password :>");
        scanf("%s", LoginVar.password);

        // Check User 

}

void Register() {
        struct AuthData RegisterVar;

        while (1)
        {
                printf("\n\t\tRegister Page\n\n");

                printf("Enter UserName :> ");
                scanf("%s", RegisterVar.username);

                printf("\nEnter Email :>");
                scanf("%s", RegisterVar.email);
                // Email Regex Check

                password:
                        printf("\nEnter Password :>");
                        scanf("%s", RegisterVar.password);
                        

                if (strlen(RegisterVar.password) < 8)
                {
                        printf("Password Is Short\n");
                        strlen(RegisterVar.password);
                        goto password;
                }

                password2:
                        printf("\nRepeat Password :>");
                        scanf("%s", &RegisterVar.RepeatPassword);

                if (RegisterVar.password != RegisterVar.RepeatPassword)
                {
                        printf("Password Is Not Match");
                        strlen(RegisterVar.password);
                        goto password2;
                }
        }  
}

