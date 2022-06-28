#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
//RPS
int main() {
  int i, n, x;
  int win=0, lose=0;

  int y =0;
   system("cls");
   printf("\n");
   printf("         ooooooooo.                       oooo             ooooooooo.                                                 .oooooo..o            o8o                                                \n");
   printf("         `888   `Y88.                     `888             `888   `Y88.                                              d8P'    `Y8            ` '                                                \n");
   printf("          888   .d88'  .ooooo.   .ooooo.   888  oooo        888   .d88'  .oooo.   oo.ooooo.   .ooooo.  oooo d8b      Y88bo.       .ooooo.  oooo   .oooo.o  .oooo.o  .ooooo.  oooo d8b  .oooo.o \n");
   printf("          888ooo88P'  d88' `88b d88' ` Y8  888 .8P'         888ooo88P'  `P  )88b   888' `88b d88' `88b `888  8P       ` Y8888o.  d88' ` Y8 `888  d88(   8 d88(   8 d88' `88b `888  8P d88(   8 \n");
   printf("          888`88b.    888   888 888        888888.          888          .oP 888   888   888 888ooo888  888               ` Y88b 888        888  ` Y88b.  ` Y88b.  888   888  888     ` Y88b.  \n");
   printf("          888  `88b.  888   888 888   .o8  888 `88b.        888         d8(  888   888   888 888    .o  888          oo     .d8P 888   .o8  888  o.  )88b o.  )88b 888   888  888     o.  )88b \n");
   printf("         o888o  o888o `Y8bod8P' `Y8bod8P' o888o o888o      o888o        `Y888  8o  888bod8P' `Y8bod8P' d888b         8  88888P'  `Y8bod8P' o888o 8  888P' 8  888P' `Y8bod8P' d888b    8  888P' \n");
   printf("                                                                                   888                                                                                                         \n");
   printf("                                                                                  o888o                                                                                                        \n");
   char ch[3][10]={"rock","scissors","paper"};
   int r[3];
   abcde:
   printf("\nPlay best of (odd only):");
   scanf("%d",&x);
    system("cls");
   rps1:

   if(x%2 == 0)
    {
       printf("\nEnter Odd Values Only");
       goto abcde;
    }
    else
    {
        int m=0;
        if(x==y ||lose==(x+1)/2 || win==(x+1)/2)
        {
            goto rpsfunctionk;
        }
        else
        {
            do
            {
               srand(time(NULL));
               r[0]=rand()%4;
                m=r[0];

            }
            while(m==0);
            char s;
            acd:
            printf("\nenter your input");
            printf("\n1||Rock");
            printf("\n2||Scissors");
            printf("\n3||Paper\n>");
            scanf("%d",&n);
            system("cls");
            if(n>3||n<1)
            {
                printf("Invalid");
                goto acd;
            }
            printf("\nYour Choice: %s\n",ch[n-1]);
            printf("\nComputer's Choice: %s\n",ch[m-1]);
                if(r[0]==n)
                {
                printf("\nIt's A Draw!");
                goto rps1;

                }
                else if(r[0]==1 && n==2)
                {
                printf("\nThe Computer Wins!");
                y++;
                 lose++;
                goto rps1;
                }
                else if(r[0]==1 && n==3)
                {
                printf("\nYou Won!");
                y++;
                 win++;
                goto rps1;
                }
                else if(r[0]==2 && n==1)
                {
                printf("\nYou Won!");
                y++;
                 win++;
                goto rps1;
                }
                else if(r[0]==2 && n==3)
                {
                printf("\nThe Computer Wins!");
                y++;
                 lose++;
                goto rps1;
                }
                else if(r[0]==3 && n==1)
                {
                printf("\nThe Computer Wins!");
                y++;
                lose++;
                goto rps1;
                }
                else if(r[0]==3 && n==2)
                {
                printf("\nYou Won!");
                y++;
                win++;
                goto rps1;
                 }

     }
    }


   rpsfunctionk:
       printf("\nTotal Computer Wins: %d\n",lose);
       printf("\nYour Total Wins: %d\n",win);
   if(win>lose){
       printf("\nWell Played!\nYou Won!\n");

   }
   else
    {
       printf("\nBetter Luck Next Time\nYou Lost\n");
   }
}

