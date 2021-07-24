#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade= 'D';


    switch(grade){
    case 'A':
        printf("you did great!");
        break;
        case 'B':
        printf(" alright");
        break;
        case 'C':
            printf("ok");
            break;
        case 'D':
            printf("poor");
            break;
        case 'F':
            printf("you failed");
            break;
        default:
            printf("invalid statement");


    }
    return 0;
}
