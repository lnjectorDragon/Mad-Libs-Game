#include <stdio.h>
#include <string.h>

int main() {



    char character[50] = "";
    char saviour[50] = "";
    char location[50] = "";
    char mystobject[50] = "";
    char adjective[50] = "";
    char temp[50] = "";

    printf("Enter an adjective (location): ");
    fgets(location, 50, stdin);
    location[strlen(location) - 1] = '\0';

    printf("Enter a character (Example/trump): ");
    fgets(character, 50, stdin);
    character[strlen(character) - 1] = '\0';

    printf("Enter a mysterious object (example/Flying plate): ");
    fgets(mystobject, 50, stdin);
    mystobject[strlen(mystobject) - 1] = '\0';

    printf("Enter a saviour (example/mango-godzilla): ");
    fgets(saviour, 50, stdin);
    saviour[strlen(saviour) - 1] = '\0';

    printf("Enter a adjective (ending w/ -ed): ");
    fgets(adjective, 50, stdin);
    adjective[strlen(adjective) - 1] = '\0';

    printf("\nToday I went to %s\n", location);
    printf("In %s i saw %s.\n", location, character);
    printf("There was %s and then %s came to save me!\n", mystobject, saviour);
    printf("I was %s so much!\n", adjective);

    return 0;
}
