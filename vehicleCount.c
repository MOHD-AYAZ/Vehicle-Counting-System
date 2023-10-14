#include<stdio.h>
#include <stdlib.h>
#include<conio.h>

int Menu();
void ShowdDetails();
void deleteData();
void cycle();
void motorCycle();
void rikshaw();
void car();
void bus();
void truck();
int NOcycle=0,NOMcycle=0,NOrikshw=0,NOcar=0,NObus=0,NOtruck=0,amount=0,count=0;

void main(){
    while(1){
    system("cls");
    switch(Menu())
    {
        case 1:
                cycle();
                break;
        case 2:
                motorCycle();
                break;
        case 3:
                rikshaw();
                break;
        case 4:
                car();
                break;
        case 5:
                bus();
                break;
        case 6:
                truck();
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
void cycle()
{
    NOcycle++;
    amount = amount + 20;
    count++;
    printf("New cycle enterd in record\n");
    printf("Press->Enter to go on menu \n");
}

void motorCycle()
{
    NOMcycle++;
    amount = amount + 40;
    count++;
    printf("New motorcycle enterd in record\n");
    printf("Press->Enter to go on menu \n");
}
void rikshaw()
{
    NOrikshw++;
    amount = amount + 70;
    count++;
    printf("New rikshaw enterd in record\n");
    printf("Press->Enter to go on menu \n");
}
void car()
{
    NOcar++;
    amount = amount + 100;
    count++;
    printf("New car enterd in record\n");
    printf("Press->Enter to go on menu \n");

}
void bus()
{
    NObus++;
    amount = amount + 200;
    count++;
    printf("New bus enterd in record\n");
    printf("Press->Enter to go on menu \n");

}
void truck()
{
    NOtruck++;
    amount = amount + 250;
    count++;
    printf("New truck enterd in record\n");
    printf("Press->Enter to go on menu \n");

}
    