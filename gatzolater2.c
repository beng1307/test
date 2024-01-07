#include <stdio.h>
#include <string.h>



struct Player
{

    char name[15];
    int score;


};



int main()
{


////////////////////////////////////////////////////////////////////////////////////////////  
 
    
    int player_num;
    

    printf("Spieleranzahl: 1, 2, 3, 4\n");
    scanf("%d", &player_num);

    
    while(player_num < 1 || player_num > 4)
    {

        printf("Ungültige Eingabe!\n\n");
        printf("Spieleranzahl: 1, 2, 3, 4\n");
        scanf("%d", &player_num);

    }


    struct Player player[player_num];

//////////////////////////////////////////////////////////////////////////////////////////// 

    int score_choice;
    int score_choice_arr[] = {301,501,701};
    
    
    printf("Auf wie viele Punkte wollt ihr spielen?: \t1. 301 \n\t\t\t\t\t\t2. 501 \n\t\t\t\t\t\t3. 701\n\n");
    scanf("%d", &score_choice);

    
    while(score_choice < 1 || score_choice > 3)
    {

        printf("Ungültige Eingabe!\n\n");
        printf("Auf wie viele Punkte wollt ihr spielen?: \t1. 301 \n\t\t\t\t\t\t2. 501 \n\t\t\t\t\t\t3. 701\n\n");
        scanf("%d", &score_choice);
        
    }


    for(int i = 0; i < player_num; i++)
    {

        for(int j = 0; j < player_num; j++)
        {

            player[j].score = score_choice_arr[score_choice-1];

        }

    }

////////////////////////////////////////////////////////////////////////////////////////////
    
    int player_arr[] = {1,2,3,4};


    for(int i = 0; i < player_num; i++)
    {
        
        printf("Name Player %d: ", player_arr[i]);
        
        scanf("%d");
        fgets(player[i].name, 15, stdin);
    
    }
    
////////////////////////////////////////////////////////////////////////////////////////////

    int gameon;

    
    for(int i = 0; i < player_num;i++)
    {

        if (player[i].score != 0)
        {

            gameon = 1;

        }
        else (gameon = 0);


    }

////////////////////////////////////////////////////////////////////////////////////////////

    int wurf1;
    int wurf2;
    int wurf3;
    char gewinner[15];

    while(gameon == 1)
    {



        printf("\n");

 
        for(int i = 0; i < player_num; i++)
        {

            printf("%s%d\n\n",player[i].name, player[i].score);

            
        }


        printf("\n\n");

        
        for(int  i = 0; i < player_num; i++)
        {

            printf("\n%sist dran!\n", player[i].name);

            
            printf("Wurf 1: ");
            scanf("%d", &wurf1); 

            printf("Wurf 2: ");
            scanf("%d", &wurf2);

            printf("Wurf 3: ");
            scanf("%d", &wurf3);

            
            int wurfx = wurf1 + wurf2 + wurf3;
            player[i].score -= wurfx;

            
            for(int i = 0; i < player_num; i++)
            {

                if(player[i].score == 0)
                {

                    gameon = 0;
                    gewinner[15] = player[i].name;
                    break;

                }
        
            }
        
        }

    }

    if(gameon == 0)
    {

        printf("Gewinner ist %s", gewinner[15]);

    }



////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////