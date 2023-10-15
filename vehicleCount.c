#include<stdio.h>
#include <stdlib.h>
#include<conio.h>

int Menu();
void ShowdDetails();
void deleteData();
void cycle(int);
void motorCycle(int);
void rikshaw(int);
void car(int);
void bus(int);
void truck(int);
int NOcycle=0,NOMcycle=0,NOrikshw=0,NOcar=0,NObus=0,NOtruck=0,amount=0,count=0;

void main(){
    while(1){
    system("cls");
                int itms;
    switch(Menu())
    {
        case 1:
                printf("How many cycle do you want to enter?");
                scanf("%d",&itms);
                cycle(itms);
                break;
        case 2:
                printf("How many motorcycle do you want to enter?");
                scanf("%d",&itms);
                motorCycle(itms);
                break;
        case 3:
                printf("How many rikshaw do you want to enter?");
                scanf("%d",&itms);
                rikshaw(itms);
                break;
        case 4:
                printf("How many car do you want to enter?");
                scanf("%d",&itms);
                car(itms);
                break;
        case 5:
                printf("How many bus do you want to enter?");
                scanf("%d",&itms);
                bus(itms);
                break;
        case 6:
                printf("How many truck do you want to enter?");
                scanf("%d",&itms);
                truck(itms);
                break;
        case 7:
                ShowdDetails();
                break;
        case 8:
                deleteData();
                break;
        case 9:
                exit(0);
        default :
                printf("Invalid choice");
    }
    
    getch();
    }
    
}

int Menu(){
    int Uchoice;
    printf("enter 1 for cycle \n");
    printf("enter 2 for motorcycle \n");
    printf("enter 3 for rikshaw \n");
    printf("enter 4 for car \n");
    printf("enter 5 for bus \n");
    printf("enter 6 for truck \n");
    printf("enter 7 show details \n");
    printf("enter 8 delete data \n");
    printf("enter 9 exit  \n");
    printf("\nEnter your choice \n");
    scanf("%d",&Uchoice);
    return(Uchoice);


}
void ShowdDetails(){

    printf("Number of cycle %d \n",NOcycle);
    printf("Number of motorcycle %d \n",NOMcycle);
    printf("Number of rikshaw %d \n",NOrikshw);
    printf("Number of car %d \n",NOcar);
    printf("Number of bus %d \n",NObus);
    printf("Number of truck %d \n",NOtruck);
    printf("Totel of vehicle %d \n",count);
    printf("Today's total collection %d \n",amount);
    printf("Press->Enter to go on menu \n");

}
void deleteData()
{
 NOcycle=0;
 NOMcycle=0;
 NOrikshw=0;
 NOcar=0;
 NObus=0;
 NOtruck=0;
 amount=0;
 count=0;  
 printf("today's all data has been deleted\n");
 printf("Press->Enter to go on menu \n"); 

}
void cycle(int x)
{
    NOcycle+=x;
    amount = amount + (x*20);
    count+=x;
    printf("New %d cycles enterd in record\n",x);
    printf("Press->Enter to go on menu \n");
}

void motorCycle(x)
{
    NOMcycle+=x;
    amount = amount + (x*40);
    count+=x;
    printf("New %d motorcycle enterd in record\n",x);
    printf("Press->Enter to go on menu \n");
}
void rikshaw(x)
{
    NOrikshw+=x;
    amount = amount + (x*70);
    count+=x;
    printf("New %d rikshaw enterd in record\n",x);
    printf("Press->Enter to go on menu \n");
}
void car(x)
{
    NOcar+=x;
    amount = amount + (x*100);
    count+=x;
    printf("New %d car enterd in record\n",x);
    printf("Press->Enter to go on menu \n");
}
void bus(x)
{
    NObus+=x;
    amount = amount + (x*200);
    count+=x;
    printf("New %d bus enterd in record\n",x);
    printf("Press->Enter to go on menu \n");

}
void truck(x)
{
    NOtruck+=x;
    amount = amount + (x*250);
    count+=x;
    printf("New %d truck enterd in record\n",x);
    printf("Press->Enter to go on menu \n");

}
    
