/******************************/
/*  pHCalculator              */
/*  Calculator to get pH      */
/*  after requesting the user */
/*  to give either H3O+ or    */
/*  OH- concentration.        */                 
/******************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    double h3o;  // Concentration of H3O+; M
    double oh;   // Concentration of OH- ; M
    double ph;   // Result               ; pH
    char option; // Option where user select either h3o or oh

    printf("Please select an option((H)3O+/(O)H-): ");
    scanf("%s", &option);

    switch(option)
    {
        case 'H':
            printf("You've selected H3O+. \n");
            printf("Write the concentration(M): (ex. 1.00e-7) ");
            scanf("%lf", &h3o);
            ph = -log10(h3o);
            break;
        case 'O':
            printf("You've selected OH-. \n");
            printf("Write the concentration(M): (ex. 1.00e-7) ");
            scanf("%lf", &oh);
            ph = 14 + log10(oh);
            break;
        default:
            printf("You haven't selected a valid option. Exiting.");
            exit(0);
    }

    return 0;
}
