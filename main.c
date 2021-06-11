#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define MAX    3
#define ARG    "cat /home/basic2/flag"

void clear()
{
    printf("\e[1;1H\e[2J");
}

void wopr_print(char *some_string)
{
    int i=0;
    struct timespec tim, tim2;
    struct timespec tim3, tim4;
    tim.tv_sec = 0;
    tim.tv_nsec = 2000000L;
    tim3.tv_sec = 1;
    tim3.tv_nsec = 50000000L;
    for(i=0; i < strlen(some_string); i++)
    //while (some_string[i] != "\0")
    {
        write(1, some_string + i, 1);
        nanosleep(&tim, &tim2 < 0);
        if (some_string[i] == "\n"){ nanosleep(&tim3, &tim2);}
        //i +=1;
    }
}


void falken()
{
    char *banner =  "#45     11456          11009          11893          11972        11315\n"
                    "PRT CON. 3.4.5.  SECTRAN 9.4.3.                      PORT STAT: SD-345\n"
                    "(311) 699-7305\n";

    char *connection_info = "(311) 767-8739\n"
        "(311) 936-2364\n"
        "-           PRT. STAT.                                   CRT. DEF.\n"
        "||||||||||||||==================================================\n"
        "FSKDJLSD: SDSDKJ: SBFJSL:                           DKSJL: SKFJJ: SDKFJLJ:\n"
        "SYSPROC FUNCT READY                            ALT NET READY\n"
        "CPU AUTH RY-345-AX3            SYSCOMP STATUS  ALL PORTS ACTIVE\n"
        "22/34534.90/3209                                          11CVB-3904-3490\n"
        "(311) 935-2364\n";

    wopr_print(banner);
    sleep(1);
    clear();
    wopr_print(connection_info);
    sleep(1);
    clear();
    wopr_print("GREETINGS PROFESSOR FALKEN.\n");
    sleep(2);
}

void vuln()
{
    char *games[15] = 
    {   
        "0. FALKEN'S MAZE\n",
        "1. BLACK JACK\n",
        "2. GIN RUMMY\n",
        "3. HEARTS\n",
        "4. BRIDGE\n",
        "5. CHECKERS\n",
        "6. CHESS\n",
        "7. POKER\n",
        "8. FIGHTER COMBAT\n",
        "9. GUERRILLA ENGAGEMENT\n",
        "10. DESERT WARFARE\n",
        "11. AIR-TO-GROUND ACTIONS\n",
        "12. THEATERWIDE TACTICAL WARFARE\n",
        "13. THEATERWIDE BIOTOXIC AND CHEMICAL WARFARE\n\n",
        "14. GLOBAL THERMONUCLEAR WAR\n"
    };
    char *flag[] = {"NOTHING_TO_SEE_HERE_HONEST"};
    short i, index = 0;
    FILE *fd;
    char *line_ptr, line_buf[0x8];
    char disallowed[] = "-";
    short bad_str = 0;

    // Initialise hidden flag in memory
    fd = fopen("flag.txt", "r");
    if (fgets(flag[0], 0x30, fd) == NULL) {return EXIT_FAILURE; }
    fclose(fd);

    // Print out the welcome banner & Game Opts
    falken();
    wopr_print("SHALL WE PLAY A GAME?\n\n");
    for(i=0; i<15; i++)
    {
        printf(games[i]);
    }

    // Allow user to select game
    wopr_print("ENTER YOUR SELECTION: ");
    while (fgets(line_buf, sizeof(line_buf), stdin)) {
        index = strtol(line_buf, &line_ptr, 10);
        for (i=0, i<strlen(line_buf); i++)
        {
            if line_buf[i] == "-") { bad_Str = 1;}
        }
        result = strcmp(disallowed, )
        if (line_ptr == line_buf || *line_ptr != '\n' ||  ) 
        {
            wopr_print("ENTER YOUR SELECTION: ");
        } 
        else if( index > 15 || )
        {
            wopr_print("WOULDN'T YOU PREFER A GOOD GAME OF CHESS?\n\n");
            wopr_print("ENTER YOUR SELECTION: ");
        }else break;
    }
    printf("\n%s\n", games[index ]);
    wopr_print("I SHALL NOW BEGIN THE GAME.\n");
}


int main(short argc, char **argv)
{
    vuln();
    return 0;
}
