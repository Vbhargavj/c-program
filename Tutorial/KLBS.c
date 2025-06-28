


#include <stdio.h>
#include <stdlib.h>

////////////GLOBAL DECLARATIONS////////////

struct user
{
    char name[50];
    int points;

}a,b;
int lifeline=1;

////////////FUNCTIONS DECLARATIONS/////////
void header();
void welcomepage();
void mainmenu();
void showrules();
int getcount();
void qset1();
void qset2();

void showscore(int);

void correct();
void wrong();
void quit();
int sethighscore();
void showhighscore();
void aboutgame();

/////////////MAIN STARTS//////////////////

int main()
{
    /* Welcome page */
    welcomepage();
    printf("\n\t\t\t\tPress any key to continue");
    getch();

    mainmenu();

    return 0;
}


////////////FUNCTIONS DEFINATIONS//////////////
void header()
{
    system("cls");

    printf("===================================================================================================");
    printf("\t\t\t\t\t\t\t  >>> KAUN BANEGA CROREPATI <<<\t\t\tUser Name - %s",a.name);
    printf("\n===================================================================================================");
}




void welcomepage()
{
    system("cls");
    printf("\n\n\n\n\n\n***********************************************************************************************************************");
    printf("***********************************************************************************************************************");
    printf("\n\n\t\t\t\t>>> WELCOME TO KAUN BANEGA CROREPATI <<<");
     printf("\n\n\t\tsubscribe Learn Easy now   !!!! ");
    printf("\n\n***********************************************************************************************************************");
    printf("***********************************************************************************************************************");
    printf("\n\n\n\n\t\t\t\t     Enter your name to begin");
    printf("\n\t\t\t\t     ");
    gets(a.name);

    if (a.name[0]=='\0')
    {
        printf("\n\t\t\tPlease enter your name");
        getch();
        welcomepage();
    }

return;

}



void mainmenu()
{
    while (1)

    {
        int choise;

        header();
        printf("\n\n\t\t\t\t\t*** MAIN MENU ***");
        printf("\n\n\t\t\t\t\t1. Start Game");
        printf("\n\t\t\t\t\t2. High Score");
        printf("\n\t\t\t\t\t3. Rules");
        printf("\n\t\t\t\t\t4. About the Game");
        printf("\n\t\t\t\t\t5. Log out User");
        printf("\n\t\t\t\t\t6. Exit");


        printf("\n\n\t\t\t\t\tEnter your choice >>>");
        fflush(stdin);
        scanf("%d",&choise);

        switch(choise)
        {      case 1:
                   showrules();
                   printf("\n\n\t\t\t\t  BEST OF LUCK !");
                   printf("\n\n\t\t\t\t<<<Press any key to begin the game>>>");
                   getch();
                   lifeline=1;

                   a.points=0;
                   switch(getcount())
                        {
                            case 1:
                            qset1();
                            break;

                            case 2:
                            qset2();
                            break;



                        }
                  break;
                            case 2:
                                showhighscore();
                                break;

               case 3:
                   showrules();
                   printf("\n\n\t\t\t\t<<<Press any key for main menu >>>");
                   getch();
                   break;
               case 4:
                aboutgame();
                break;
               case 5:
                   main();

               case 6:
                    exit(0);


               case 7:
                   exit(0);
printf("\n\n\t\t\t\t Enter your choice >>>");
               default:
                    printf("\nEnter any valid choice");

        }

     }
}



void showrules()
{
    header();
    printf("\n\n\t\t\t\t\t*** Game Rules ***");
    printf("\n\n\t\t1. You have to answer 14 questions one by one");
    printf("\n\t\t2. Each question has a fixed prize money starting from Rs. 5,000 to 5 Crore");
    printf("\n\t\t3. Game is divided into three levels");
    printf("\n\t\t4. If you will give a wrong answer you will fall down to level's starting point");
    printf("\n\t\t5. You may use  one Life Line 50-50 ");
    printf("\n\t\t6.You may quit the game anytime ");


}


int getcount()
{
    int count=0;
    FILE *fp;
    fp=fopen("counter.DAT","rb");


	if(fp==NULL)
	{
    fp=fopen("counter.DAT","wb");
	count=2;
	       if(fp==NULL)
                        {printf("\nErorr");
                            getch();
                            exit(0);}
		fwrite(&count,sizeof(int),1,fp);

	count=1;
	}

   else
   {
       fread(&count,sizeof(int),1,fp);
       fclose(fp);
       fp=fopen("counter.DAT","wb");
       if(fp==NULL)
                        {printf("\nErorr");
                            getch();
                            exit(0);}
       count++;
       fwrite(&count,sizeof(int),1,fp);

       count--;

   }

    while(count>2)

{
 count=count-2;
}

 fclose(fp);
    return count;
}



void qset1()
{char q;
     /*  QUESTION 1 */

        q111:
        header();
        printf("\n Question no 1");
        printf("\t\t\t\t\t\t\t\t\t\tRS.5,000/-");
        printf("\n\n\t\t\tWho is popularly known as 'Father of Indian Cinema'?");
        printf("\n\n\t\t\t\tA. Dadasaheb Phalke");
        printf("\n\t\t\t\tB. V. Shantaram");
        printf("\n\t\t\t\tC. Ardeshir Irani");
        printf("\n\t\t\t\tD. Kidar Sharma");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      { q112:
          lifeline=0;
          header();
        printf("\n Question no 1    You are using life line");
        printf("\t\t\t\t\t\t\t\t\t\tRS.5,000/-");
        printf("\n\n\t\t\tWho is popularly known as 'Father of Indian Cinema'?");
        printf("\n\n\t\t\t\tA. Dadasaheb Phalke");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tD. Kidar Sharma");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

       break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q112;
       }

        }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q111;

       }



        /*  QUESTION 2 */


        q121:
        header();
        printf("\n Question no 2");
        printf("\t\t\t\t\t\t\t\t\t\tRS.10,000/-");
        printf("\n\n\t\t\tWhat is the age limit for the athletes participating in the Youth Olympic Games?");
        printf("\n\n\t\t\t\tA. 14 to 20");
        printf("\n\t\t\t\tB. 15 to 22");
        printf("\n\t\t\t\tC. 14 to 18");
        printf("\n\t\t\t\tD. 16 to 25");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'A' :case 'B' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {  q122:
          lifeline=0;
         header();
        printf("\n Question no 2    You are using life line");
        printf("\t\t\t\t\t\t\t\t\t\tRS.10,000/-");

        printf("\n\n\t\t\tWhat is the age limit for the athletes participating in the Youth Olympic Games?");
        printf("\n\n\t\t\t\t");
        printf("\n\t\t\t\tB. 15 to 22");
        printf("\n\t\t\t\tC. 14 to 18");
        printf("\n\t\t\t\t");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q122;
       }

        }

         break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q121;}





   /*  QUESTION 3 */


        q131:
        header();
        printf("\n Question no 3");
        printf("\t\t\t\t\t\t\t\t\t\tRS.20,000/-");
        printf("\n\n\t\t\tWhat is the name for the mapped hexagonal geographic areas that make up the cellular phone grid?");
        printf("\n\n\t\t\t\tA. Hexagrids");
        printf("\n\t\t\t\tB. Pins");
        printf("\n\t\t\t\tC. Cells");
        printf("\n\t\t\t\tD. Containers");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'A' :case 'B' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {   q132:
          lifeline=0;
          header();
        printf("\n Question no 3   You are using lifeline");
        printf("\t\t\t\t\t\t\t\t\t\tRS.20,000/-");
        printf("\n\n\t\t\tWhat is the name for the mapped hexagonal geographic areas that make up the cellular phone grid?");

        printf("\n\n\t\t\t\tA. Hexagrids");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tC. Cells");
        printf("\n\t\t\t\t");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
      fflush(stdin);
       scanf("%c",&q);

       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto q132;
       }

        }
         break;
        default:
            printf("\nEnter any valid choice");
            getch();
           goto q131 ;}



        /*  QUESTION 4 */


        q141:
        header();
        printf("\n Question no 4");
        printf("\t\t\t\t\t\t\t\t\t\tRS.40,000/-");
        printf("\n\n\t\t\tWho is the only leader to be selected Prime Minister of Pakistan three times ??");
        printf("\n\n\t\t\t\tA. Syed Yousaf Raza Gillani");
        printf("\n\t\t\t\tB. Benazir Bhutto");
        printf("\n\t\t\t\tC. Liaqat Ali Khan");
        printf("\n\t\t\t\tD. Nawaz Sharif ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'A' :case 'B' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {   q142:
          lifeline=0;
          header();
        printf("\n Question no 4  You are using life line");
        printf("\t\t\t\t\t\t\t\t\t\tRS.40,000/-");
        printf("\n\n\t\t\tWho is the only leader to be selected Prime Minister of Pakistan three times ??");
        printf("\n\n\t\t\t\tA. Syed Yousaf Raza Gillani");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tD. Nawaz Sharif ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
           goto q142;

       }

        }
         break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q141;}



        /*  QUESTION 5 */


        q151:
        header();
        printf("\n Question no 5");
        printf("\t\t\t\t\t\t\t\t\t\tRS.80,000/-");
        printf("\n\n\t\t\tWhich was the first telephone company to create a handheld mobile phone");
        printf("\n\n\t\t\t\tA. Apple");
        printf("\n\t\t\t\tB. Motorola");
        printf("\n\t\t\t\tC. Nokia");
        printf("\n\t\t\t\tD. Samsung ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'D' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {q152:
          lifeline=0;

        header();
        printf("\n Question no 5");
        printf("\t\t\t\t\t\t\t\t\t\tRS.80,000/-  You are using your lifeline");
        printf("\n\n\t\t\tWhich was the first telephone company to create a handheld mobile phone");
        printf("\n\n\t\t\t\tA. Apple");
        printf("\n\t\t\t\tB. Motorola");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q152;

       }

        }

        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q151;

            }





         /*  QUESTION 6 */


        q161:
        header();
        printf("\n Question no 6");
        printf("\t\t\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tIn 2012, which of these countries has been removed by WHO from the polioendemic countries ?");
        printf("\n\n\t\t\t\tA. Pakistan ");
        printf("\n\t\t\t\tB. Nigeria ");
        printf("\n\t\t\t\tC. India ");
        printf("\n\t\t\t\tD. Afghanistan  ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'A' :case 'D' :case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {  q162:
          lifeline=0;

        header();
        printf("\n Question no 6   You are using your lifeline");
        printf("\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tIn 2012, which of these countries has been removed by WHO from the polioendemic countries ?");
        printf("\n\n\t\t\t\t ");
        printf("\n\t\t\t\tB. Nigeria ");
        printf("\n\t\t\t\tC. India ");
        printf("\n\t\t\t\t ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q162;

       }

        }

        default:
            printf("\nEnter any valid choice");
            getch();
            goto q161;}




         /*  QUESTION 7 */


        q171:
        header();
        printf("\n Question no 7");
        printf("\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\tWhich of these personalities has also served as Deputy Prime Minister of India ? ?");
        printf("\n\n\t\t\t\tA. Lal Bahadur Shastri  ");
        printf("\n\t\t\t\tB. L K Advani  ");
        printf("\n\t\t\t\tC. Gulzarilal Nanda");
        printf("\n\t\t\t\tD. Arjun Singh ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'D' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {q172:
          lifeline=0;

        header();
        printf("\n Question no 7  You are using your life line");
        printf("\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\tWhich of these personalities has also served as Deputy Prime Minister of India ? ?");
        printf("\n\n\t\t\t\tA. Lal Bahadur Shastri  ");
        printf("\n\t\t\t\tB. L K Advani  ");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q172;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q171;
        }



          /*  QUESTION 8 */


        q181:
        header();
        printf("\n Question no 8");
        printf("\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
        printf("\n\n\t\t\tWho among these conquerors was the first to invade India ?");
        printf("\n\n\t\t\t\tA. Timur  ");
        printf("\n\t\t\t\tB. Nadir Shah  ");
        printf("\n\t\t\t\tC. Ahmad Shah Durrani");
        printf("\n\t\t\t\tD. Babur ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'D' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {q182:
          header();
        printf("\n Question no 8    You are using your lifeline");
        printf("\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
        printf("\n\n\t\t\tWho among these conquerors was the first to invade India ?");
        printf("\n\n\t\t\t\tA. Timur  ");
        printf("\n\t\t\t\t  ");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tD. Babur ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q182;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q181;}



           /*  QUESTION 9 */


        q191:
        header();
        printf("\n Question no 9");
        printf("\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
        printf("\n\n\t\t\t What part of the body is normally cut open during an appendix operation?");
        printf("\n\n\t\t\t\tA. Abdomen  ");
        printf("\n\t\t\t\tB. Chest  ");
        printf("\n\t\t\t\tC. Head");
        printf("\n\t\t\t\tD. Neck");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'D' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {q192:
          header();
        printf("\n Question no 9  You are using your lifeline");
        printf("\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
        printf("\n\n\t\t\t What part of the body is normally cut open during an appendix operation?");
        printf("\n\n\t\t\t\tA. Abdomen  ");
        printf("\n\t\t\t\t  ");
        printf("\n\t\t\t\tC. Head");
        printf("\n\t\t\t\t");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q192;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q191;}



      /*  QUESTION 10*/


        q1101:
        header();
        printf("\n Question no 10");
        printf("\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\t What was the largest social network prior to Facebook??");
        printf("\n\n\t\t\t\tA. LetsBeFriends  ");
        printf("\n\t\t\t\tB. Google+  ");
        printf("\n\t\t\t\tC.Friendster");
        printf("\n\t\t\t\tD. MySpace");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'B' :case 'A' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {q1102:
          lifeline=0;
          header();
        printf("\n Question no 10");
        printf("\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\t What was the largest social network prior to Facebook??");
        printf("\n\n\t\t\t\t ");
        printf("\n\t\t\t\t ");
        printf("\n\t\t\t\tC.Friendster");
        printf("\n\t\t\t\tD. MySpace");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1102;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1101;}



             /*  QUESTION 11 */


        q1111:
        header();
        printf("\n Question no 11");
        printf("\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\t.. Name the England Cricket Captain who became the youngestBatsman to score 7000 Runs ");
        printf("\n\n\t\t\t\tA. Kevin Peitersen  ");
        printf("\n\t\t\t\tB. Alastair Cook ");
        printf("\n\t\t\t\tC. Daniel Vettori");
        printf("\n\t\t\t\tD. Andrew Strauss ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'D' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {q1112:
          lifeline=0;

        header();
        printf("\n Question no 11  You are using your life line");
        printf("\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\tName the England Cricket Captain who became the youngestBatsman to score 7000 Runs");
        printf("\n\n\t\t\t\tA. Kevin Peitersen ");
        printf("\n\t\t\t\tB.Alastair Cook  ");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\t ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1112;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1111;
        }



            /*  QUESTION 12 */


        q1121:
        header();
        printf("\n Question no 12");
        printf("\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t India�s first super computer is ?");
        printf("\n\n\t\t\t\tA. Agni  ");
        printf("\n\t\t\t\tB. Flow solver  ");
        printf("\n\t\t\t\tC. Param");
        printf("\n\t\t\t\tD. Trisul ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'A' :case 'D' :case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {q1122:
          lifeline=0;

        header();
        printf("\n Question no 12  you are using lifeline");
        printf("\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t India�s first super computer is ?");
        printf("\n\n\t\t\t\tA. Agni  ");
        printf("\n\t\t\t\t  ");
        printf("\n\t\t\t\tC. Param");
        printf("\n\t\t\t\tD. ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1122;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1121;
        }


/*  QUESTION 13 */


        q1131:
        header();
        printf("\n Question no 13");
        printf("\t\t\t\t\t\t\t\t\t\tRS.1,00,00,000/-");
        printf("\n\n\t\t\t What does the �SIM� in SIM card stand for?");
        printf("\n\n\t\t\t\tA. System Internet Mode  ");
        printf("\n\t\t\t\tB. Subscriber Identity Moduler  ");
        printf("\n\t\t\t\tC. Sending Internet Module");
        printf("\n\t\t\t\tD. Subtype Identity Method ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {q1132:
          lifeline=0;

        header();
        printf("\n Question no 12  You are using lifeline");
        printf("\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t What does the �SIM� in SIM card stand for?");

        printf("\n\t\t\t\tB. Subscriber Identity Moduler  ");

        printf("\n\t\t\t\tD. Subtype Identity Method ");


        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
       case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1132;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1131;
        }





        /*  QUESTION 14 */


        q1141:
        header();
        printf("\n Question no 14");
        printf("\t\t\t\t\t\t\t\t\t\tRS.5,00,00,000/-");
        printf("\n\n\t\t\t Who was the first Governor General of India ?");
        printf("\n\n\t\t\t\t(A) Lord Amherst ");
        printf("\n\t\t\t\t(B) Lord William Bentinck  ");
        printf("\n\t\t\t\t(C) Sir Charles Metcalfe");
        printf("\n\t\t\t\t(D) Robert Clive  ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {q1142:
          lifeline=0;

        header();
        printf("\n Question no 14");
        printf("\t\t\t\t\t\t\t\t\t\tRS.5,00,00,000/-");
        printf("\n\n\t\t\t Who was the first Governor General of India ?");
        printf("\n\n\t\t\t\t(A) Lord Amherst ");
        printf("\n\t\t\t\t(B) Lord William Bentinck  ");
        printf("\n\t\t\t\t(C) ");
        printf("\n\t\t\t\t(D)   ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1142;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto q1141;
        }

return;
}




void showscore(int temp)
{
 switch(temp)
 {
    case 0:
    printf("No money !");
    break;

    case 1:
    printf("Rs.5,000");
    break;

    case 2:
    printf("Rs.10,000");
    break;

    case 3:
    printf("Rs.20,000");
    break;

    case 4:
    printf("Rs.40,000");
    break;

    case 5:
    printf("Rs.80,000");
    break;

    case 6:
    printf("Rs.1,60,000");
    break;

    case 7:
    printf("Rs.2,50,000");
    break;

    case 8:
    printf("Rs.3,20,000");
    break;

    case 9:
    printf("Rs.6,40,000");
    break;

    case 10:
    printf("Rs.12,50,000");
    break;

    case 11:
    printf("Rs.25,00,000");
    break;

    case 12:
    printf("Rs.50,00,000");
    break;

    case 13:
    printf("Rs.1 Crore");
    break;

    case 14:
    printf("Rs.5 Crore");
    break;
 }
}



void correct()
{
        header();
        a.points++;
        printf("\n\n \t\t\tCORRECT ANSWER !");
        printf("\n\n \t\t\tYOU HAVE WON ");
        showscore(a.points);
        printf("\n\n\t\t\t\t Press any key for next question for ");
        showscore(a.points+1);
        getch();
        return;

}
void wrong()
{header();

        printf("\n\n \t\t\tWRONG ANSWER !");
        printf("\n\n \t\t\tPRIZE MONEY WON ");
        if (a.points>=1 && a.points<5)
        {
            printf("Rs.5,000");
            a.points=1;
        }
        if (a.points>=5 && a.points<10)
        {
            printf("Rs.80,000");
            a.points=5;
        }
        if (a.points>=10 && a.points<14)
        {
            printf("Rs.25,00,000");
            a.points=10;
        }

        if (sethighscore()==1)
        {
            printf("\n\t\t\tNew High Score !");
        }
        else
        {
            printf("\n\t\t\tNo highscore");
        }
        printf("\n\t\t Press any key for main menu>>");
        getch();
        mainmenu();

}
void quit ()
{
        header();

        printf("\n\n \t\t\tYou just quit the game");
        printf("\n\n \t\t\tYOU HAVE WON ");
        showscore(a.points);
        if (sethighscore()==1)
        {
            printf("\nNew High Score !");
        }
        else
        {
            printf("\nNo highscore");
        }
        printf("\n\n\t\t\t\t Press any key for Main menu >> ");
       getch();
        mainmenu();

}
void qset2()
{char q;
     /*  QUESTION 1 */

        qa111:
        header();
        printf("\n Question no 1");
        printf("\t\t\t\t\t\t\t\t\t\tRS.5,000/-");
        printf("\n\n\t\t\tWhich was the last movie directed by Yash Chopra?");
        printf("\n\n\t\t\t\tA. Jab Tak Hai Jaan");
        printf("\n\t\t\t\tB. Rab Ne Bana Di Jodi");
        printf("\n\t\t\t\tC. Veer Zara");
        printf("\n\t\t\t\tD. Ek Tha Tiger");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      { qa112:
          lifeline=0;
          header();
          printf("\n Question no 1 You are using your lifeline");
        printf("\t\t\t\t\t\t\t\t\t\tRS.5,000/-");
       printf("\n\n\t\t\tWhich was the last movie directed by Yash Chopra?");
        printf("\n\n\t\t\t\tA. Jab Tak Hai Jaan");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tC. Veer Zara");
        printf("\n\t\t\t\t");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'A':
        correct();
        break;
        case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

       break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto qa112;
       }

        }
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa111;

       }



        /*  QUESTION 2 */


        qa121:
        header();
        printf("\n Question no 2");
        printf("\t\t\t\t\t\t\t\t\t\tRS.10,000/-");
        printf("\n\n\t\t\tWho has been India's longest serving woman Chief Minister ?");
        printf("\n\n\t\t\t\tA. Vasundhara Raje");
        printf("\n\t\t\t\tB. Jayalalita");
        printf("\n\t\t\t\tC. Sheila Dixit ");
        printf("\n\t\t\t\tD. Mayavati");


        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'A' :case 'B' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {  qa122:
          lifeline=0;
         header();
        printf("\n Question no 2    You are using life line");
        printf("\t\t\t\t\t\t\t\t\t\tRS.10,000/-");

       printf("\n\n\t\t\tWho has been India's longest serving woman Chief Minister ?");
        printf("\n\n\t\t\t\t");
        printf("\n\t\t\t\tB. Jayalalita");
        printf("\n\t\t\t\tC. Sheila Dixit ");
        printf("\n\t\t\t\t");


        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto qa122;
       }

        }

         break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa121;}





   /*  QUESTION 3 */


        qa131:
        header();
        printf("\n Question no 3");
        printf("\t\t\t\t\t\t\t\t\t\tRS.20,000/-");
        printf("\n\n\t\t\tWho won the first nobel prize from India");
        printf("\n\n\t\t\t\tA. Mahatma Gandhi");
        printf("\n\t\t\t\tB. Rabindra Naath Tagore");
        printf("\n\t\t\t\tC. C V Raman");
        printf("\n\t\t\t\tD. Mother Teresa");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'A' :case 'B' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {   qa132:
          lifeline=0;
          header();
        printf("\n Question no 3   You are using lifeline");
        printf("\t\t\t\t\t\t\t\t\t\tRS.20,000/-");
        printf("\n\n\t\t\tWho won the first nobel prize from India");
        printf("\n\n\t\t\t\t");
        printf("\n\t\t\t\tB. Rabindra Naath Tagore");
        printf("\n\t\t\t\tC. C V Raman");
        printf("\n\t\t\t\t");


        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
      fflush(stdin);
       scanf("%c",&q);

       switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        default :
            printf("\nEnter any valid choice");
            getch();
            goto qa132;
       }

        }
         break;
        default:
            printf("\nEnter any valid choice");
            getch();
           goto qa131 ;}



        /*  QUESTION 4 */


        qa141:
        header();
        printf("\n Question no 4");
        printf("\t\t\t\t\t\t\t\t\t\tRS.40,000/-");
        printf("\n\n\t\t\t.Olympic games 2008 were held in which  of the following places?");
        printf("\n\n\t\t\t\tA. London");
        printf("\n\t\t\t\tB. Brazil");
        printf("\n\t\t\t\tC. Athenes");
        printf("\n\t\t\t\tD. Beijing ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'A' :case 'B' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {   qa142:
          lifeline=0;
          header();
        printf("\n Question no 4  You are using life line");
        printf("\t\t\t\t\t\t\t\t\t\tRS.40,000/-");
        printf("\n\n\t\t\t.Olympic games 2008 were held in which  of the following places?");
        printf("\n\n\t\t\t\tA. London");

        printf("\n\t\t\t\tD. Beijing ");


        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
           goto qa142;

       }

        }
         break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa141;}



        /*  QUESTION 5 */


        qa151:
        header();
        printf("\n Question no 5");
        printf("\t\t\t\t\t\t\t\t\t\tRS.80,000/-");
        printf("\n\n\t\t\tWeb pages are written using");
        printf("\n\n\t\t\t\tA. FTPB");
        printf("\n\t\t\t\tB. HTML");
        printf("\n\t\t\t\tC. c++");
        printf("\n\t\t\t\tD. URL   ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'D' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {qa152:
          lifeline=0;

        header();
        printf("\n Question no 5");
        printf("\t\t\t\t\t\t\t\t\t\tRS.80,000/-  You are using your lifeline");
        printf("\n\n\t\t\tWeb pages are written using");
        printf("\n\n\t\t\t\tA. FTPB");
        printf("\n\t\t\t\tB. HTML");



        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa152;

       }

        }

        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa151;

            }





         /*  QUESTION 6 */


        qa161:
        header();
        printf("\n Question no 6");
        printf("\t\t\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tWhich one of the following air pollution can affect blood stream leading to death ?");
        printf("\n\n\t\t\t\tA.  Cadmium  ");
        printf("\n\t\t\t\tB. Asbestos dust  ");
        printf("\n\t\t\t\tC. Carbon monodioxide ");
        printf("\n\t\t\t\tD. Lead   ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'A' :case 'D' :case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {  qa162:
          lifeline=0;

        header();
        printf("\n Question no 6   You are using your lifeline");
        printf("\t\t\t\t\t\t\t\tRS.1,60,000/-");
        printf("\n\n\t\t\tWhich one of the following air pollution can affect blood stream leading to death ?");

        printf("\n\t\t\t\tB. Asbestos dust  ");
        printf("\n\t\t\t\tC. Carbon monodioxide ");



        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa162;

       }

        }

        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa161;}




         /*  QUESTION 7 */


        qa171:
        header();
        printf("\n Question no 7");
        printf("\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\t Out of the given countries which got independence on 15 August 1971 ?");
        printf("\n\n\t\t\t\tA.  Congoi  ");
        printf("\n\t\t\t\tB. Bahrain   ");
        printf("\n\t\t\t\tC.  Pakistan ");
        printf("\n\t\t\t\tD. India");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'D' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {qa172:
          lifeline=0;

        header();
        printf("\n Question no 7  You are using your life line");
        printf("\t\t\t\t\t\t\t\t\t\tRS.2,50,000/-");
        printf("\n\n\t\t\t Out of the given countries which got independence on 15 August 1971 ?");
        printf("\n\n\t\t\t\tA.  Congoi  ");
        printf("\n\t\t\t\tB. Bahrain   ");



        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa172;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa171;
        }



          /*  QUESTION 8 */


        qa181:
        header();
        printf("\n Question no 8");
        printf("\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
        printf("\n\n\t\t\tThe first mechanical computer designed by Charles Babbage was called what? ");
        printf("\n\n\t\t\t\tA. Analytical Engine  ");
        printf("\n\t\t\t\tB. Abacus  ");
        printf("\n\t\t\t\tC. Calculator");
        printf("\n\t\t\t\tD. Processor ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'D' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {qa182:
          header();
        printf("\n Question no 8    You are using your lifeline");
        printf("\t\t\t\t\t\t\t\t\t\tRS.3,20,000/-");
         printf("\n\n\t\t\tThe first mechanical computer designed by Charles Babbage was called what? ");
        printf("\n\n\t\t\t\tA. Analytical Engine  ");
        printf("\n\t\t\t\tB. Abacus  ");



        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa182;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa181;}



           /*  QUESTION 9 */


        qa191:
        header();
        printf("\n Question no 9");
        printf("\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
        printf("\n\n\t\t\t Who is the world�s second batsman to hit a double century in ODI cricket?");
        printf("\n\n\t\t\t\tA. Virendra Sehwag ");
        printf("\n\t\t\t\tB. Sachin Tendulkar  ");
        printf("\n\t\t\t\tC. Virat Kohli ");
        printf("\n\t\t\t\tD. Bryan Lara");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :case 'D' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {qa192:
          header();
        printf("\n Question no 9  You are using your lifeline");
        printf("\t\t\t\t\t\t\t\t\t\tRS.6,40,000/-");
         printf("\n\n\t\t\t Who is the world�s second batsman to hit a double century in ODI cricket?");
        printf("\n\n\t\t\t\tA.Virendra Sehwag  ");
        printf("\n\t\t\t\tB. Sachin Tendulkar  ");



        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'A':
        correct();
        break;
        case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa192;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa191;}



      /*  QUESTION 10*/


        qa1101:
        header();
        printf("\n Question no 10");
        printf("\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\t The 'Char Minar' is in which city?");
        printf("\n\n\t\t\t\tA. Ahmedabad  ");
        printf("\n\t\t\t\tB. Sikri ");
        printf("\n\t\t\t\tC.Delhi");
        printf("\n\t\t\t\tD. Hyderabad ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'B' :case 'A' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {qa1102:
          lifeline=0;
          header();
        printf("\n Question no 10");
        printf("\t\t\t\t\t\t\t\t\t\tRS.12,50,000/-");
        printf("\n\n\t\t\t The 'Char Minar' is in which city?");
        printf("\n\n\t\t\t\tA. Ahmedabad  ");


        printf("\n\t\t\t\tD. Hyderabad ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'D':
        correct();
        break;
        case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa1102;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa1101;}



             /*  QUESTION 11 */


        qa1111:
        header();
        printf("\n Question no 11");
        printf("\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\t.. From which language has the word �Punjab� been derived ?");
        printf("\n\n\t\t\t\tA. Arabic   ");
        printf("\n\t\t\t\tB. Persian ");
        printf("\n\t\t\t\tC. Sanskrit");
        printf("\n\t\t\t\tD. Tamil ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'D' :case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {qa1112:
          lifeline=0;

        header();
        printf("\n Question no 11  You are using your life line");
        printf("\t\t\t\t\t\t\t\t\t\tRS.25,00,000/-");
        printf("\n\n\t\t\t.. From which language has the word �Punjab� been derived ?");
        printf("\n\n\t\t\t\tA. Arabic   ");
        printf("\n\t\t\t\tB. Persian ");



        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa1112;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa1111;
        }



            /*  QUESTION 12 */


        qa1121:
        header();
        printf("\n Question no 12");
        printf("\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t What is the motto of the Paralympic Games? ");
        printf("\n\n\t\t\t\tA. Never Broken by Hardship or Battle  ");
        printf("\n\t\t\t\tB. World in Motion  ");
        printf("\n\t\t\t\tC. Spirit in Motion");
        printf("\n\t\t\t\tD. To Conquer is to Live ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'A' :case 'D' :case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {qa1122:
          lifeline=0;

        header();
        printf("\n Question no 12  you are using lifeline");
        printf("\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
        printf("\n\n\t\t\t What is the motto of the Paralympic Games? ");

        printf("\n\t\t\t\tB. World in Motion  ");
        printf("\n\t\t\t\tC. Spirit in Motion");

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
       case 'B' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa1122;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa1121;
        }


/*  QUESTION 13 */


        qa1131:
        header();
        printf("\n Question no 13");
        printf("\t\t\t\t\t\t\t\t\t\tRS.1,00,00,000/-");
        printf("\n\n\t\t\t Which of these places is called the Coal Capital of India ?");
        printf("\n\n\t\t\t\tA. Durgapur  ");
        printf("\n\t\t\t\tB. Dhanbad  ");
        printf("\n\t\t\t\tC.  Raniganj");
        printf("\n\t\t\t\tD. Hazaribag ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {qa1132:
          lifeline=0;

        header();
        printf("\n Question no 13");
        printf("\t\t\t\t\t\t\t\t\t\tRS.50,00,000/-");
         printf("\n\n\t\t\t Which of these places is called the Coal Capital of India ?");
        printf("\n\n\t\t\t\tA. Durgapur  ");
        printf("\n\t\t\t\t");
        printf("\n\t\t\t\tC.  Raniganj");
        printf("\n\t\t\t\t ");

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'C':
        correct();
        break;
        case 'A' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa1132;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa1131;
        }





        /*  QUESTION 14 */


        qa1141:
        header();
        printf("\n Question no 14");
        printf("\t\t\t\t\t\t\t\t\t\tRS.5,00,00,000/-");
        printf("\n\n\t\t\t Where was Mughal empress Mumtaz Mahal originally buried in 1631 ?");
        printf("\n\n\t\t\t\t(A)  Agra  ");
        printf("\n\t\t\t\t(B) Burhanpur  ");
        printf("\n\t\t\t\t(C)  Gwalior");
        printf("\n\t\t\t\t(D) Lahore  ");
        if (lifeline==1)
        {printf("\n\n\t\t\t\tE. Use Life line");}

        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
        case 'A' :case 'C' :case 'D' :
        wrong();
        break;

        case 'F':
        quit();
        break;

        case 'E':
      {qa1142:
          lifeline=0;

        header();
        printf("\n Question no 14");
        printf("\t\t\t\t\t\t\t\t\t\tRS.5,00,00,000/-");
         printf("\n\n\t\t\t Where was Mughal empress Mumtaz Mahal originally buried in 1631 ?");

        printf("\n\t\t\t\t(B) Burhanpur  ");
        printf("\n\t\t\t\t(C)  Gwalior");



        printf("\n\n\t\t\t\tF. Quit Game");
        printf("\n\n\t\t\t\t Enter your choice >>>");
       fflush(stdin);
       scanf("%c",&q);
        switch(q)
       {case 'B':
        correct();
        break;
       case 'C' :
        wrong();
        break;

        case 'F':
        quit();
        break;
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa1142;
       }

        }
        default:
            printf("\nEnter any valid choice");
            getch();
            goto qa1141;
        }

}





int sethighscore()
{
    int temp,temp2=0;
    FILE *fr;
    fr=fopen("highscore.DAT","rb");


	if(fr==NULL)
	{
    fr=fopen("highscore.DAT","wb");

	                if(fr==NULL)
                           {printf("\nErorr");
                            getch();
                            exit(0);}

		fwrite(&a,sizeof(struct user),1,fr);
		temp2=1;


	}

   else
   {
       fread(&b,sizeof(struct user),1,fr);
       fclose(fr);

        if (a.points>b.points)
       {temp2=1;

      fr=fopen("highscore.DAT","wb");
                    if(fr==NULL)
                        {printf("\nErorr");
                            getch();
                            exit(0);}

       fwrite(&a,sizeof(struct user),1,fr);
       fclose(fr);

       }

   }


    return temp2;
}


void showhighscore()
{ FILE *ft;
    header();

        printf("\n\n\t\t\tHIGH SCORE");

    ft=fopen("highscore.DAT","rb");


	if(ft==NULL)
	{

      printf("\n\t\t\tNo high score available");

	}

   else
   {
       fread(&b,sizeof(struct user),1,ft);
       fclose(ft);
       printf("\nName   ");
       puts(b.name);

     printf("\nPrize Money Won = ");
     showscore(b.points);


       }

getch();
}



void aboutgame()
{
    header();
    printf("\n\n\t\t\t\t\t*** ABOUT THE GAME***");
    printf("\n\n\t\tKaun Banega Crorepati");
    printf("\n\t\tVersion 1.0");
    printf("\n\t\tMade in C language");
    printf("\n\t\tBy ASAD MIRZA \n OR Learn Easy ! ");

  getch();

}