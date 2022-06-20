// create a program which randomly generates 8 groups with 4 teams each

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
//important if you want to get different result in every execution (change the seed)
    srand(time(NULL));
//this is the list of all the teams
    char teams[32][32] = {"Rhino Hurricanes" , "Midnight Stars" , "Rocky Assasians" , "Striking SharpShooters" , "Skull Fireballs" , "Blue Bombers" , "Blue Geckos" ,"Midnight Miners" , "Spirit Blocker" ,"Wind Kamizake Pilot" , "Retri Chuckers" , "Venomous Cyborgs" , "QuickSilver Ninjas" , "ALpha Blockers" , "Retro heroes" , "Lions","Raging SPanners","Poison SPiders","Balck Bullets","Thunder Commandos","Venomous Sharks","Killer Stars", "Tornado GEckos","Knockout Busters","Muffin Racers", "Real Madrid","Demolition PhileDrivers","Flying Experss", "silver wasps"," The Showstoppers","Wolfsburg","Black and White Gangstaz"};

//each group will hold 4 teams each one
    char groupA[4][32];
    char groupB[4][32];
    char groupC[4][32];
    char groupD[4][32];
    char groupE[4][32];
    char groupF[4][32];
    char groupG[4][32];
    char groupH[4][32];

//the array s contain the name of each group only for print
    char s[8]= {'A','B','C','D','E','F','G','H'};
//the gX variables are the number of team of each group during the draw
    int gA = 0 ,gB = 0 , gC = 0 , gD = 0 , gE = 0, gF = 0, gG = 0, gH = 0;
//the r is the random number representing the group on which every team will be
    int r , i;
    int ok = 0;

    printf("The World CUP Group Draw \n");
    printf(" **************************** \n");
    //this for loop is for the draw of groups
    for (i = 0; i < 32; i++)
    {
        //when ok is zero that means the team is still without group
        ok=0;
        do
        {
            //we use the rand() in order to get a random number
            r=(rand()%8);

            if(r==0 && gA<8)  //Group A
            {
                printf("group = %c and team is %s\n", s[r],teams[i]);
                strcpy(groupA[gA],teams[i]);
                gA++;
                ok=1;
            }

            if(r==1 && gB<8)  //Group B
            {
                printf("group = %c and team is %s\n", s[r],teams[i]);
                strcpy(groupB[gB],teams[i]);
                gB++;
                ok=1;
            }
            if(r==2 && gC<8)  //Group C
            {
                printf("group = %c and team is %s\n", s[r],teams[i]);
                strcpy(groupC[gC],teams[i]);
                gC++;
                ok=1;
            }
            if(r==3 && gD<8)  //Group D
            {
                printf("group = %c and team is %s\n", s[r],teams[i]);
                strcpy(groupD[gD],teams[i]);
                gD++;
                ok=1;
            }
             if(r==4 && gE<8)  //Group B
            {
                printf("group = %c and team is %s\n", s[r],teams[i]);
                strcpy(groupE[gE],teams[i]);
                gE++;
                ok=1;
            }
             if(r==5 && gF<8)  //Group B
            {
                printf("group = %c and team is %s\n", s[r],teams[i]);
                strcpy(groupF[gF],teams[i]);
                gF++;
                ok=1;
            }
             if(r==6 && gG<8)  //Group B
            {
                printf("group = %c and team is %s\n", s[r],teams[i]);
                strcpy(groupG[gG],teams[i]);
                gG++;
                ok=1;
            }
             if(r==7 && gH<8)  //Group B
            {
                printf("group = %c and team is %s\n", s[r],teams[i]);
                strcpy(groupH[gH],teams[i]);
                gH++;
                ok=1;
            }

        }
        while (ok==0);
    }

//print the final result of the draw
    printf("\n%-15s %-15s %-15s %-15s  %-15s%-15s%-15s%-15s\n","GroupA","GroupB","GroupC","GroupD","GroupE","GroupF","GroupG","GroupH");
    printf("\n%-15s %-15s %-15s %-15s %-15s %-15s%-15s %-15s \n","______","______","______","______","______","______","______","______");
    for(i = 0; i < 8; i++)
    {
        printf("\n%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",groupA[i],groupB[i],groupC[i],groupD[i],groupE[i],groupF[i],groupG[i],groupH[i]);
    }

    return 0;
}
