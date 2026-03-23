#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ANIMAL_NAME_SIZE 64

struct cat
{
    char name[ANIMAL_NAME_SIZE];
    void (*speak)(char *);
};

struct dog
{
    void (*speak)(char *);
    char name[ANIMAL_NAME_SIZE];
};

struct cat *bemol = NULL;
struct dog *mam = NULL;

void cat_speak(char *name)
{
    printf("miaou, de %s\n", name);
}

void dog_speak(char *name)
{
    printf("gron, de %s\n", name);
}

int main()
{
    char buff[100];

    while (1)
    {
        printf("> ");
        fgets(buff, sizeof(buff), stdin);

        // create dog and display memory
        if (!strcmp(buff, "newdog\n"))
        {
            mam = malloc(sizeof(struct dog));
            mam->speak = dog_speak;
            strcpy(mam->name, "maaaam");
            printf("Got dog at %p\n", mam);
            printf("Name?\n");
            fgets(mam->name, ANIMAL_NAME_SIZE, stdin);
        }

        // create cat
        else if (!strcmp(buff, "newcat\n"))
        {
            bemol = malloc(sizeof(struct cat));
            bemol->speak = cat_speak;
            // strcpy(bemol->name, "bemolito");
            printf("Got cat at %p\n", bemol);
            printf("Name?\n");
            fgets(bemol->name, ANIMAL_NAME_SIZE, stdin);
        }

        // free dog
        else if (!strcmp(buff, "deletedog\n"))
        {
            free(mam);
        }

        // free cat
        else if (!strcmp(buff, "deletecat\n"))
        {
            free(bemol);
        }

        // use dog (=> UAF bang big badaboum)
        else if (!strcmp(buff, "speakdog\n"))
        {
            if (mam)
                mam->speak(mam->name);
        }

        // use cat
        else if (!strcmp(buff, "speakcat\n"))
        {
            if (bemol)
                bemol->speak(bemol->name);
        }

        if (!strcmp(buff, "help\n"))
        {
            printf("options:\n");
            printf("newdog\n");
            printf("newcat\n");
            printf("deletedog\n");
            printf("deletecat\n");
            printf("printdog\n");
            printf("printcat\n");
        }
    }

    return 0;
}