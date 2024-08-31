#include <stdio.h>

enum Animals {
    CAT = 10,
    TIGER,
    DOG = 20,
    HORSE
};

int main() {
    int animalID;

    scanf("%d", &animalID);

    switch ( animalID ) {
        case CAT:
            printf("meow...\n");
            break;
        case TIGER:
            printf("grrrrrr...\n");
            break;
        case DOG:
            printf("bark...\n");
            break;
        case HORSE:
            printf("heee-haaa...\n");
            break;
        default:
            printf("Wrong animal ID\n");
            break;
    }

    return 0;
}
