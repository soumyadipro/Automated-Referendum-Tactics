#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

typedef struct voter_information
{
  char id[10];
  char name[20];
  char birth_date[15];
  char father_name[20];
  char mother_name[20];
  struct voter_information *next;
} node;

 node *head;
 int cunt1=0,cunt2=0,cunt3=0,cunt4=0,cunt5=0;
int main()
{
    system("cls");
    printf("\n\n\n");
    printf("\t        - - - - - - WELCOME TO AUTOMATED REFERENDUM TACTIC - - - - - -\n\n");
    printf("\t             - - - * * * * * * * * * * * * * * * * * * * * * * - - -  \n\n\n\n\n");
    printf("   \t\t- - -PLEASE ENTER ONE(1) FOR LOGGING VOTE MAIN LOGEE- - - - \n\n\n");
    int B;
    scanf("%d",&B);
    if(B==1)
    {
        main_loges();
    }
    return 0;
}
void main_loges()
{
    system("cls");

printf("\n\n\n");
printf("        \t\t\t\t FOR VOTE ENTRY - - - - - |||\n");
sleep(300);
printf("        \t\t\t\t FOR ADMIN PANEL - - - - - |||\n");
sleep(300);
printf("        \t\t\t\t3  For winner - - - - - |||\n");
sleep(300);
printf("        \t\t\t\t4  For Exit - - - - - |||\n\n\n\n\n");
printf("     \t----- After voter entry you can give your vote Otherwise you cannot-----\n\n\n");
sleep(500);
printf("   \t- - - - - - - - - - - -So please Enter (1) - - - - - - - - - - - - \n\n\n");
int T;
scanf("%d",&T);
if(T==1)
 {
  voter_insert();
 }
if(T==2)
 {
  admin();
 }
if(T==3)
 {
  winner();
 }
if(T==4)
  {
  exi();

  }
}

int cunt=0,count=0,R=3;
void voter_insert()
{
   node *temp;

   char name[25],birth_date[15],f_name[25],m_name[25],id[10];
   system("cls");
   printf("\n\n\n\n");
printf("\tIF NATIONAL ID,YOUR NAME,BIRTH DATE,FATHER NAME AND MOTHER NAME                MATCH YOU CAN GIVE VOTE OTHERWISE NOT\n\n\n");
   sleep(2);
   printf("\t\t\tIF YOU DO WRONG  (%d) TIMES THE PROGRAM WILL STOP AUTOMATICALLY\n\n\n,R");
   sleep(2);
   printf("\t\tplease---, \n");
   sleep(2);
   printf("\t\t\t\tENTER YOUR NATIONAL ID NUMBER  ");
   gets(id);
   gets(id);
   printf("\t\t\t\tENTER YOUR NAME                ");
   gets(name);
   printf("\t\t\t\tENTER YOUR BIRTH DATE          ");
   gets(birth_date);
   printf("\t\t\t\tENTER YOUR FATHER'S NAME       ");
   gets(f_name);
   printf("\t\t\t\tENTER YOUR MOTHER'S NAME       ");
   gets(m_name);
   temp=(node *)malloc(sizeof(node));
   strcpy(temp->id,id);
   strcpy(temp->name,name);
   strcpy(temp->birth_date,birth_date);
   strcpy(temp->father_name,f_name);
   strcpy(temp->father_name,f_name);
   strcpy(temp->father_name,f_name);
   strcpy(temp->mother_name,m_name);
   temp->next=NULL;
   head=temp;
   while(temp!=NULL)
{
      if((strcmp(temp->id, "10000001")==0 && strcmp(temp->name, "madhusudan")==0  && strcmp(temp->birth_date, "09-5-1950")==0 && strcmp(temp->father_name, "kaustuv")==0 && strcmp(temp->mother_name, "gita")==0)||
      (strcmp(temp->id, "10000002")==0 && strcmp(temp->name, "chanchal")==0 && strcmp(temp->birth_date, "27-7-1971")==0 && strcmp(temp->father_name, "subimal")==0 && strcmp(temp->mother_name, "swapna")==0)||
      (strcmp(temp->id, "10000003")==0 && strcmp(temp->name, "debjani")==0 && strcmp(temp->birth_date, "15-8-1974")==0 && strcmp(temp->father_name, "madhusudan")==0 && strcmp(temp->mother_name, "Gita devi")==0)||
      (strcmp(temp->id, "10000004")==0 && strcmp(temp->name, "ram")==0 && strcmp(temp->birth_date, "27-7-1971")==0 && strcmp(temp->father_name, "shyam")==0 && strcmp(temp->mother_name, "Gayetri")==0)||
      (strcmp(temp->id, "10000005")==0 && strcmp(temp->name, "anil")==0  && strcmp(temp->birth_date, "09-5-1950")==0 && strcmp(temp->father_name, "varun")==0 && strcmp(temp->mother_name, "disha")==0)||
      (strcmp(temp->id, "10000006")==0 && strcmp(temp->name, "srishti")==0  && strcmp(temp->birth_date, "09-5-1950")==0 && strcmp(temp->father_name, "suresh")==0 && strcmp(temp->mother_name, "sunita")==0)||
      (strcmp(temp->id, "10000001")==0 && strcmp(temp->name, "ritika")==0  && strcmp(temp->birth_date, "09-5-1950")==0 && strcmp(temp->father_name, "basavaraj")==0 && strcmp(temp->mother_name, "nikhila")==0))

      {
          cunt++;
          if(cunt>1)
          {
              not_again();
              break;
          }
          voting();
      }
      else
      {
          R--;
          count++;
          if(count==3)
          {
              stop();
              break;
          }
          printf("\n\n\n\n");
          printf("\t\tYOUR VOTER ID OR NAME OR DATE OF BIRTH OR FATHER'S NAME IS WRONG\n\n");
          sleep(2);
          printf("\t\t\t\tPLEASE RENTER YOUR PASSWORD\n\n");
          sleep(2);
          system("parse");
          main_loges();
      }
      temp=temp->next;

   }
}
void voting()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t       * * * * * List of candidates * * * * *   \n\n\n");
    sleep(2);
    printf("\t\t\t NAME - - - - - - - - - - SYMBOL\n\n");
    sleep(2);
    printf("\t\t\t 1.Narendra Modi          1.Lotus");
    sleep(2);
    printf("\t\t\t 2.Rahul Gandhi           2.Hand");
    sleep(2);
    printf("\t\t\t 3.Arvind Kejriwal        3.Broom");
    sleep(2);
    printf("\t\t\t 4.Mamata Banerjee        4.Grass and flower");


    int B,j;
    printf("\t\t\t Please--,\n");
    printf("\t\t\t\t  Enter your choice   ");
    for(j=1;j<=1;j++)
    {
        scanf("%d",&B);
        if(B==1)
        {
            cunt1++;
        }
        if(B==2)
        {
            cunt2++;
        }
        if(B==3)
        {
            cunt3++;
        }
        if(B==4)
        {
            cunt4++;
        }
        if(B!=1 && B!=2 && B!=3 && B!=4)
        {
            printf("\t\t\t Your vote is invalid\n");
            main_loges();
        }
    }
    int R;
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t\t IF YOU WANT TO SEE PRESENT WINNER ENTER (1) OR\n\n\n \t\t\t\t\tzero(0) For main loges\n\n\n");
    scanf("%d",&R);
    if(R==1)
    {
        winner();
    }
    if(R!=1)
    {
        main_loges();
    }
}

void admin()
{
    int B;
    printf("\n\n\n\n");
    printf("\t\t\tEnter password to unlock admin panel\n\n");
    scanf("%d",&B);
    if(B==10715)
    {
        show();
    }
    else
    {
        printf("Wrong password\n");
    }
}

void show()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t\t  How many votes who get\n\n\n");
    sleep(2);
    printf("\t\t\t Narendra Modi got   %d votes\n",cunt1);
    sleep(2);
    printf("\t\t\t Rahul Gandhi  got   %d votes\n",cunt2);
    sleep(2);
    printf("\t\t\t Arvind Kejriwal got   %d votes\n",cunt3);
    sleep(2);
    printf("\t\t\t Mamata Banerjee got   %d votes\n",cunt4);
    sleep(2);

    int R;
    printf("\t\t\t Enter one(1) For Main loges Or\n\n\n \t\t\t\tZero(0) For exit\n");
    scanf("%d",&R);
    if(R==1)
    {
        main_loges();
    }
    else
    {
        exi();
    }
}

void winner()
{
    system("cls");
    printf("\n\n\n\n");
    if(cunt2<cunt1 && cunt3<cunt1 && cunt4<cunt1)
        printf("\t\t\tThe present winner is Narendra Modi and he got %d votes\n\n\n\n\n",cunt1);

    if(cunt1<cunt2 && cunt3<cunt2 && cunt4<cunt2)
        printf("\t\t\tThe present winner is Rahul Gandhi and he got %d votes\n\n\n\n\n",cunt2);

    if(cunt1<cunt3 && cunt2<cunt3 && cunt4<cunt3)
        printf("\t\t\tThe present winner is Arvind Kejriwal and he got %d votes\n\n\n\n\n",cunt3);

    if(cunt1<cunt4 && cunt2<cunt4 && cunt3<cunt4)
        printf("\t\t\tThe present winner is Mamata Banerjee and she got %d votes\n\n\n\n\n",cunt4);

        int T;
        printf("\t\t\t Enter one(1) For Main loges Or\n\n\n \t\t\t\tZero(0) For exit\n");
        scanf("%d",&T);
        if(T==1)
       {
        main_loges();
       }
       if(T!=1)
       {
        exi();
       }
}

void stop()
{
    system("cls");
    printf("\n\n\n");
    printf("\t- - - - - - -:)SORRY YOU CANNOT GIVE YOUR VOTE FOR WRONG ENTRY THREE(3) TIMES -:)- - - - -\n\n\n");
    sleep(2);
    printf("\t\t\t* * * *-----PLEASE TRY AGAIN AFTER A FEW MOMENT-----* * * *\n\n\n");
    sleep(2);
    printf("\t\t\t\t* * * * ----- THANK YOU ------* * * *\n\n\n");
    sleep(2);
}

void not_again()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t- - - - - - -YOU HAVE GIVE YOUR VOTE SUCCESSFULLY- - - - -\n\n");
    sleep(2);
    printf("    \t\t----- So YOU CANNOT VOTE FOR MORE THAN ONE(1) TIME -----* * * *\n\n\n");
    sleep(2);
    printf("\t\t\t If you want to see present winner enter one(1) OR\n\t\t\t\t\tTwo(2) for main loges\n");
    sleep(2);
    printf("\t\t\t\t\t Zero(0) For exit\n\n");
    scanf("%d",&R);
    if(R==1)
    {
        winner();
    }
    if(R==2)
    {
        main_loges();
    }
    if((R!=1) || (R!=2))
    {
        exi();
    }
}

void exi()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t- - - - - - - - - You have given your vote succesfully 0 - - - - - - - - \n\n\n");
    sleep(2);
    printf("\t\t\t\t* * * * *- - - Thank you- - -* * * * * *\n\n\n ");
    sleep(2);
}
