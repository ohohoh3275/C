#include <stdio.h>

enum tree { MAPLE, OAK, PINE, LIME };

int main(void) {

    enum tree tree;
    char *pointer = NULL;

    tree = MAPLE;
    switch (tree) {
        case MAPLE :
            pointer = "syrup";
            break;
        case OAK :
            pointer = "royal";
            break;
        case PINE :
            pointer = "apple";
            break;
        case LIME:
            pointer = "cocktail";
            break;    
    }

    printf("guess what the pointer assigned >>> %s\n", pointer);
    
    return 0;
}