#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct player 
{
    char name[64];
    char country[64];
    char position[32];
    int age;
    struct player *next;
};

typedef struct player player;

player *start;
int no_players;

void addplayer(char *name, char *ctr, char *pos, int age){
    player *pholder, *add;

    if(!start){
        pholder = malloc(sizeof(player));
        memset(pholder, 0, sizeof(player));
        no_players++;
        strncpy(pholder->name, name, 63);
        strncpy(pholder->country, ctr, 63);
        strncpy(pholder->position, pos, 31);
        pholder->age = age;
        pholder->next = 0;

        start = pholder;

        return;
    };

    for(pholder=start; pholder->next; pholder = pholder->next);

    add = malloc(sizeof(player));
    memset(add, 0, sizeof(player));
    no_players++;
    strncpy(add->name, name, 63);
    strncpy(add->country, ctr, 63);
    strncpy(add->position, pos, 31);
    add->age = age;
    add->next = 0;
     
    pholder->next = add;
};


void listplayername(char *searchstr){
    player *pholder;

    for(pholder=start; pholder; pholder = pholder->next)

    if(!searchstr||!strcmp(searchstr, pholder->name)){
        printf("Name: %s\t Country: %s \n", pholder->name, pholder->country);
    }
    return;
};


int removeplayer(char *searchstr){
    player *pholder, *prepholder;

    for(pholder=start; pholder; prepholder = pholder, pholder = pholder->next)

    if(!searchstr||!strcmp(searchstr, pholder->name)){
        
        if(start == pholder)
            start = pholder->next;
        else
            prepholder->next = (pholder->next)?pholder->next:0;

        free(pholder);
        pholder = NULL;
        return 1;
    }
    return 0;
};

int main(){
    start = 0;
    no_players = 0;

    addplayer("Fortune","Nigeria","CM\n",22);
    addplayer("Dinho","Brazil","AM\n",26);
    addplayer("Kevin","Brazil","DM\n",26);
    addplayer("Wagner","Germany","CM\n",22);
    addplayer("Patric","Portugal","AM\n",26);
    addplayer("Daniel","Italy","DM\n",26);
    
    listplayername(0);
    removeplayer("Daniel");
    listplayername(0);
    
};