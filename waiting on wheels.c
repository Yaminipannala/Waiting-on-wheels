#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
char t;
int price1,price2,price3,car1[size],front1=-1,rare1=-1,amount1,amount2,amount3,gst1,gst2,gst3,totalamount1,totalbank,totalamount2,totalamount3,a,b,c,d,car2[size],car3[size],front2=-1,rare2=-1,item2,front3=-1,rare3=-1,item3;
int listnumber1,listnumber2,listnumber3,jayanth1=0,jayanth2=0,jayanth3=0;
int typecar,custo;
int type,ii,g=1;
char str[100],typewash[100];
char item1[100];
char carno[100];
void carpush();
void display();
void carpop1();
void carpop2();
void carpop3();
void details();
int car_details();
int bank();
void water();

struct bill
{
char carno[100];
char str[100];
};

struct bill h[50];

struct login
{
    char username[100];
    char password[100];
}aa;
void  main(){
printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

water();
}
void water()
{
int j;
   
printf("1.Customer\n2.Owner\n");
scanf("%d",&j);
system("cls");
            printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

if(j==1){
FILE *f1;
    int choice;
    char ch,user[100],pass[100];
   
   
     

        printf("1.Sign Up\n2.Login:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            f1=fopen("log.data","aa");
            if(f1==NULL){
                fprintf(stderr, "\nError opened file\n");
                exit (1);
            }
            printf("Enter username:\n");
            scanf("%s",aa.username);
            printf("Enter password:\n");
            scanf("%s",aa.password);
            fwrite (&aa, sizeof(struct login),1, f1);
            if(fwrite != 0){
                printf("Username and Password is registered !\n");
            }
            else{
                printf("Error writing file !\n");
            }
            fclose(f1);
            break;
            case 2:
            printf("Enter username:\n");
            scanf("%s",user);
            printf("Enter password:\n");
            scanf("%s",pass);
            f1= fopen ("log.data","r");
            if (f1 == NULL){
                fprintf(stderr, "\nError opening file\n");
                exit (1);
            }
            int temp=1;
            while(fread(&aa, sizeof(struct login), 1,f1)){
                if(strcmp(user,aa.username)==0 && strcmp(pass,aa.password)==0){
                    printf("Login successful.\n");
                    temp=0;
                    break;  
                }
            }
            if(temp){
            system("cls");
            printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

             printf("USERNAME OR PASSWORD IS INVALID\n");
            water();

             
            }
            fclose (f1);
            break;
        }
        printf("Do you want to continue (Y/N):\n");
        getchar();
        scanf("%c",&ch);
        system("cls");
         

if(ch=='y')
{

   

   int w,wt;
   char x;
  char op;
             
     printf("\n****************************************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n****************************************************************************************************************************************************************************************************\n");
               
   
   printf("\t\t\t\t\t\t\t\t\t      THE BEST CAR WASHING GARAGE IN HYD\n\n");
   printf("\t\t\t\t\t\t\t\t\t\t     WE OFFER SERVICES TO\n\n\t\t\t\t\t\t\t\t\t\t     Hatcback-Sedan-SUV\n");
   printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");
   
   
 
   
   
     printf("        Services offered:\n\n");
    printf("\tHATCHBACK\t\t\t\t\t\t\t\t\tSEDAN\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tSUV\n\n");
    printf("\tPRESSURE WASH\t\t\t\t\t\t\t\t\tPRESSURE WASH\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPRESSURE WASH\n");
    printf("\tUSING SHAMPOO:\t\t\t\t\t\t\t\t\tUSING SHAMPOO:\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tUSING SHAMPOO:\n");
    printf("\tBody:   1000\t\t\t\t\t\t\t\t\tBody:   1000\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tBody:   1050\n");
    printf("\tInterior:1030\t\t\t\t\t\t\t\t\tInterior:1050\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tInterior:1150\n");
    printf("\tComplete:1050\t\t\t\t\t\t\t\t\tComplete:1150\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tComplete:1250\n\n");
   
    printf("\tUSING FOAM:\t\t\t\t\t\t\t\t\tUSING FOAM:\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tUSING FOAM:\n");
    printf("\tBody:   1000\t\t\t\t\t\t\t\t\tBody:   1050\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tBody:   1150\n");
    printf("\tInterior:1050\t\t\t\t\t\t\t\t\tInterior:1150\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tInterior:1250\n");
    printf("\tComplete:1150\t\t\t\t\t\t\t\t\tComplete:1250\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tComplete:1350\n\n");
   
   
   
    printf("\tNORMAL WASH\t\t\t\t\t\t\t\t\tNORMAL WASH\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNORMAL WASH\n");
    printf("\tUSING SHAMPOO:\t\t\t\t\t\t\t\t\tUSING SHAMPOO:\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tUSING SHAMPOO:\n");
    printf("\tBody:   1000\t\t\t\t\t\t\t\t\tBody:   1000\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tBody:   1100\n");
    printf("\tInterior:1050\t\t\t\t\t\t\t\t\tInterior:1100\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tInterior:1200\n");
    printf("\tComplete:1100\t\t\t\t\t\t\t\t\tComplete:1200\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tComplete:1300\n\n");
   
    printf("\tUSING FOAM:\t\t\t\t\t\t\t\t\tUSING FOAM:\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tUSING FOAM:\n");
    printf("\tBody:   1200\t\t\t\t\t\t\t\t\tBody:   1300\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tBody:   1400\n");
    printf("\tInterior:1300\t\t\t\t\t\t\t\t\tInterior:1400\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tInterior:1500\n");
    printf("\tComplete:1400\t\t\t\t\t\t\t\t\tComplete:1500\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tComplete:1600\n\n");
 
 
    printf("SHALL WE GO TO THE GARAGE:\n");
    scanf("\n%c",&x);
    if(x=='y'||x=='Y'){
    system("cls");
      printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

 
   int i;
   for(i=0; i<=size; i++) {
       details();
       system("cls");
         printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

       display();

        printf("\nShall we proceed for washing(y/n) :\n");
       scanf("%s",&op);
      if(op=='y') {
          carpush();
  totalbank=price1+price2+price3;
   printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

  water();
      }
      else{
printf("HOPE YOU WE WILL REACH YOUR EXPECTATION'S NEXT TIME");
system("cls");
 printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

water();

       printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

}
  }

}

else{
printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

water();
}

}
}
else{
        char r;
        int username,password;
           
             system("cls");
          printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

     printf("ONLY FOR STAFF MEMBERS:\n");
     printf("Enter your useraname:\n");
     scanf("%d",&username);
     printf("Enter your password:\n");
     scanf("%d",&password);
     if(username==123 && password==1234){
           printf("Do you want to know the number of cars visited today(y/n):\n");
           scanf("\n%c",&r);
           if(r=='y'){
            printf("\n");
            car_details();
            printf("\n");
            bank();
        }
        else
        {
bank();
}
        }
        else{
        system("cls");
          printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

        printf("ENTER A VALID USERNAME AND PASSWORD\n");
       
        water();
        }
        }
}




 void carpush()
{
  if(typecar==1) {
        if(rare1==size-1) {
           printf("Queue is full washing not possible\n");
         
      }
       else {
           printf("Enter serial number to be washed:\n");
           scanf("%s",item1);
           jayanth1++;
           if(front1==-1 && rare1==-1) {
               front1=rare1=0;
             
          }
           else {
               rare1=rare1+1;
             
          }
          car1[rare1]=item1[100];
         
           printf("Washing confirmed\n");
         
      }
       system("cls");
       
     
  }
  else if(typecar==2) {
      if(rare2==size-1) {
           printf("Queue is full washing not possible\n");
         
      }
       else {
           printf("Enter serial number to be washed:\n");
           scanf("%d",&item2);
           jayanth2++;
           if(front2==-1 && rare2==-1) {
               front2=rare2=0;
             
          }
           else {
               rare2=rare2+1;
             
          }
           car2[rare2]=item2;
           
           printf("Washing confirmed\n");
         
      }
       system("cls");

     
  }
   else {
        if(rare3==size-1) {
           printf("Queue is full washing not possible\n");
         
      }
       else {
           printf("Enter serial number to be washed:\n");
           scanf("%d",&item3);
           jayanth3++;
           if(front3==-1 && rare3==-1) {
               front3=rare3=0;
             
          }
           else {
               rare3=rare3+1;
             
          }
           car3[rare3]=item3;
           
           printf("Washing Confirmed\n");
         
      }
       system("cls");
       
  }

}
void details()
{

FILE *f3;
f3=fopen("bills.txt","w+");
   int w,wt,c;
   char type1[100],type2[100],type3[100];
   if(f3==NULL){
printf("File does not exit\n");
return;
}
for(ii=0;ii<g;ii++){

printf("Enter the customer name:\n");
scanf("%s",h[ii].str);
 printf("\n\n");
printf("Enter the car number plate:\n");
scanf("%s%n",&h[ii].carno,&c);
fwrite(&h[ii],sizeof(struct bill),1,f3);

 printf("\n\n");
}
fclose(f3);
f3=fopen("bills.txt","r");
 if((c-1)!=10) {
system("cls");
    printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

   

      printf("ENTER A VALID CAR NUMBER PLATE\n\n");
      details();
  }
  else
  {

      printf("Enter the type of car \n1 for HatchBack \n2 for Sedan\n3 for SUV:\n");
      scanf("%d",&typecar);
       printf("\n\n");
     if(typecar==1)
      {
       printf("Enter the type of wash:\n1 for Pressure\n2 for Normal:\n");
          scanf("%d",&type);
           printf("\n\n");
          if(type==1) {
                  printf("Enter\n1 for Shampoo wash \n2 for Foam wash:\n");
                  scanf("%d",&w);
                   printf("\n\n");
                  if(w==1) {
                          printf("Enter \n1 for Body Wash \n2 for Interior Wash \n3 for Interior and exterior wash\n");
                          scanf("%d",&a);
                           printf("\n\n");
                           switch(a) {
                              case 1:
                              amount1=1000;
                              break;
                          case 2:
                              amount1=1030;
                              break;
                          case 3:
                              amount1=1050;
                           
                  }
                   
              }
                      else {
                          printf("Enter \n1 for Body wash \n2 for Interior wash \n3 for Interior and exterior wash\n");
                          scanf("%d",&b);
                           printf("\n\n");
                          switch(b) {
                              case 1:
                              amount1=1000;
                              break;
                          case 2:
                              amount1=1050;
                              break;
                          case 3:
                              amount1=1150;
                           
                  }
                   
              }
          }
          else {
                   printf("Enter\n1 for Shampoo wash \n2 for Foam wash:\n");
                  scanf("%d",&wt);
                   printf("\n\n");
                   
                  if(wt==1) {
                          printf("Enter\n1 for Body wash \n2 for Interior wash \n3 for Interior and exterior wash\n");
                          scanf("%d",&c);
                           printf("\n\n");
                          switch(c) {
                              case 1:
                              amount1=1000;
                              break;
                          case 2:
                              amount1=1050;
                              break;
                          case 3:
                              amount1=1100;
                           
                  }
                   
              }
                      else {
                          printf("Enter\n1 for Body wash \n2 for Interior wash \n3 for Interior and exterior wash\n");
                          scanf("%d",&d);
                           printf("\n\n");
                          switch(d) {
                              case 1:
                              amount1=1200;
                              break;
                          case 2:
                              amount1=1300;
                              break;
                          case 3:
                              amount1=1400;
                           
                  }
              }
          }
      }


      else if(typecar==2)
      {
       
           printf("Enter the type of wash:\n1 for Pressure\n2 for Normal:\n");
          scanf("%d",&type);
           printf("\n\n");
          if(type==1) {
                  printf("Enter\n1 for Shampoo wash \n2 for Foam wash:\n");
                  scanf("%d",&w);
                   printf("\n\n");
                  if(w==1) {
                          printf("Enter\n1 for Body wash \n2 for Interior wash \n3 for Interior and exterior wash\n");
                          scanf("%d",&a);
                           printf("\n\n");
                          switch(a) {
                              case 1:
                              amount2=1000;
                              break;
                          case 2:
                              amount2=1050;
                              break;
                          case 3:
                              amount2=1150;
                           
                  }
                   
              }
                      else {
                          printf("Enter\n1 for Body wash \n2 for Interior wash \n3 for Interior and exterior wash\n");
                          scanf("%d",&b);
                           printf("\n\n");
                          switch(b) {
                              case 1:
                              amount2=1050;
                              break;
                          case 2:
                              amount2=1150;
                              break;
                          case 3:
                              amount2=1250;
                           
                  }
                   
              }
          }
          else {
                   printf("Enter \n1 for Shampoo wash \n2 for Foam wash:\n");
                  scanf("%d",&wt);
                   printf("\n\n");
                  if(wt==1) {
                          printf("Enter\n1 for Body wash \n2 for Interior wash \n3 for Interior and exterior wash\n");
                          scanf("%d",&c);
                           printf("\n\n");
                          switch(c) {
                              case 1:
                              amount2=1000;
                              break;
                          case 2:
                              amount2=1100;
                              break;
                          case 3:
                              amount2=1200;
                           
                  }
                   
              }
                      else {
                          printf("Enter\n1 for Body wash \n2 for Interior wash \n3 for Interior and exterior wash\n");
                          scanf("%d",&d);
                           printf("\n\n");
                          switch(d) {
                              case 1:
                              amount2=1300;
                              break;
                          case 2:
                              amount2=1400;
                              break;
                          case 3:
                              amount2=1500;
                           
                  }
              }
          }
      }


      else {
   
           printf("Enter the type of wash:\n1 for Pressure\n2 for Normal:\n");
          scanf("%d",&type);
           printf("\n\n");
          if(type==1) {
                  printf("Enter\n1 for Shampoo wash \n2 for Foam wash:\n");
                  scanf("%d",&w);
                   printf("\n\n");
                  if(w==1) {
                          printf("Enter \n1 for Body wash \n2 for Interior wash \n3 for Interior and exterior wash\n");
                          scanf("%d",&a);
                           printf("\n\n");
                          switch(a) {
                              case 1:
                              amount3=1050;
                              break;
                          case 2:
                              amount3=1150;
                              break;
                          case 3:
                              amount3=1250;
                           
                  }
                   
              }
                      else {
                          printf("Enter\n1 for Body wash \n2 for Interior wash \n3 for Interior and exterior wash\n");
                          scanf("%d",&b);
                           printf("\n\n");
                          switch(b) {
                              case 1:
                              amount3=1150;
                              break;
                          case 2:
                              amount3=1250;
                              break;
                          case 3:
                              amount3=1350;
                           
                  }
                   
              }
          }
          else {
                   printf("Enter \n1 for Shampoo wash \n2 for Foam wash:\n");
                  scanf("%d",&wt);
                   printf("\n\n");
                  if(wt==1) {
                          printf("Enter\n1 for Body wash \n2 for Interior wash \n3 for Interior and exterior wash\n");
                          scanf("%d",&c);
                           printf("\n\n");
                          switch(c) {
                              case 1:
                              amount3=1100;
                              break;
                          case 2:
                              amount3=1200;
                              break;
                          case 3:
                              amount3=1300;
                           
                  }
                   
              }
                      else {
                          printf("Enter\n1 for Body wash \n2 for Interior wash \n3 for Interior and exterior wash\n");
                          scanf("%d",&d);
                           printf("\n\n");
                          switch(d) {
                              case 1:
                              amount3=1400;
                              break;
                          case 2:
                              amount3=1500;
                              break;
                          case 3:
                              amount3=1600;
                           
                  }
              }
          }
      }
 
}


}
void display()
{



  if(typecar==1) {
       int time1=0,i,listnumber1=0;
       for(i=front1; i<=rare1; i++) {
            listnumber1=i+2;
           

            time1=(listnumber1*3)-3;
            if(listnumber1>5){
            time1=12;
}
         
      }
       gst1=(amount1*18)/100;
       totalamount1=amount1+gst1;
       price1=price1+totalamount1;
       
       for(ii=0;ii<g;ii++){
 
       
       
       
          printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t| WELCOME TO WAITING ON WHEELS|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|\t  WASHING BILL\t      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Name:\t\t       %s|\n",h[ii].str);
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Car number:\t    %s|\n",h[ii].carno);
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Min waiting time:\t%d mins|\n ",time1);
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Sno in HatBack Queue:\t     %d|\n",listnumber1);
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Type of car:\t     HatchBack|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       if(type==1){

    printf("\t\t\t\t\t\t\t\t\t\t|Type of wash :\t      Pressure|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
   


}
else{
   printf("\t\t\t\t\t\t\t\t\t\t|Type of wash :         Normal|\n");
   printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");


}
       printf("\t\t\t\t\t\t\t\t\t\t|Amount:\t %d  rupees |\n",amount1);
  printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|GST:\t\t   %d  rupees|\n",gst1);
       printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|Totalamount:\t  %d  rupees|\n",totalamount1);
       printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
  printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
       }if(rare1-front1==3) {
           carpop1();
      }
  }
  else if(typecar==2) {
      int time2=0,i,listnumber2=0;
       for(i=front2; i<=rare2; i++) {
            listnumber2=i+2;
     

            time2=(listnumber2*3)-3;
         
      }
       gst2=(amount2*18)/100;
       totalamount2=amount2+gst2;
       price2=price2+totalamount2;
       
       for(ii=0;ii<g;ii++)
{
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t| WELCOME TO WAITING ON WHEELS|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|\t  WASHING BILL\t      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Name:\t\t       %s|\n",h[ii].str);
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Car number:\t    %s|\n",h[ii].carno);
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Min waiting time:\t%d mins|\n ",time2);
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|S.no in Sedan Queue:\t     %d|\n",listnumber2);
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Type of car:\t\t Sedan|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       if(type==1){

    printf("\t\t\t\t\t\t\t\t\t\t|Type of wash :\t      Pressure|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");

}
else{
   printf("\t\t\t\t\t\t\t\t\t\t|Type of wash :         Normal|\n");
   printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");


}
       printf("\t\t\t\t\t\t\t\t\t\t|Amount:\t %d  rupees |\n",amount2);
  printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|GST:\t\t   %d  rupees|\n",gst2);
       printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|Totalamount:\t  %d  rupees|\n",totalamount2);
       printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
  printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
   }
      if(rare2-front2==3) {
           carpop2();
      }
  }
  else {
      int time3=0,i,listnumber3=0;
       for(i=front3; i<=rare3; i++) {
            listnumber3=i+2;
           
            time3=(listnumber3*3)-3;
         
      }
       gst3=(amount3*18)/100;
       totalamount3=amount3+gst3;
       price3=price3+totalamount3;
 for(ii=0;ii<g;ii++){
 
       printf("\n\n\n");
   
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t| WELCOME TO WAITING ON WHEELS|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|\t  WASHING BILL\t      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Name:\t\t       %s|\n",h[ii].str);
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Car number:\t    %s|\n",h[ii].carno);
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Min waiting time:\t%d mins|\n ",time3);
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|S.no in SUV Queue:\t     %d|\n",listnumber3);
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|Type of car:\t\t   SUV|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       if(type==1){

    printf("\t\t\t\t\t\t\t\t\t\t|Type of wash :\t      Pressure|\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");

}
else{
   printf("\t\t\t\t\t\t\t\t\t\t|Type of wash :         Normal|\n");
   printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");


}
       printf("\t\t\t\t\t\t\t\t\t\t|Amount:\t %d  rupees |\n",amount3);
  printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|GST:\t\t   %d  rupees|\n",gst3);
       printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|Totalamount:\t  %d  rupees|\n",totalamount3);
       printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
  printf("\t\t\t\t\t\t\t\t\t\t|                             |\n");
       printf("\t\t\t\t\t\t\t\t\t\t|-----------------------------|\n");
   }
      if(rare3-front3==3) {
           carpop3();
      }
  }
}

void carpop1()
{
printf("%d car completed washing successfully\n",car1[front1]);
   if(front1==rare1) {
       front1=rare1=1;
     
  }
   else {
       front1=front1+1;
     
  }
}
void carpop2()
{

   printf(" %d car completed washing successfully\n",car2[front2]);
   
   if(front2==rare2) {
       front2=rare2=1;
     
  }
   else {
       front2=front2+1;
     
  }
}
void carpop3()
{
   printf(" %d car completed washing successfully\n",car3[front3]);
   
   if(front3==rare3) {
       front3=rare3=1;
     
  }
   else {
       front3=front3+1;
     
  }
}
int car_details()
{
   int i;
   printf("Total numbers of HATCHBACK customers visited:\n");
   printf("%d\n",jayanth1);
   
   printf("Total numbers of SEDAN customers visited:\n");
   printf("%d\n",jayanth2);
   
   printf("Total numbers of SUV customers visited:\n");
   printf("%d\n",jayanth3);
}
int bank()
{
  char m;
  printf("Do you want to know the total amount recieved today(y/n):\n");
  scanf("\n%c",&m);
  if(m=='y') {
    printf("\n");
      printf("Total amount recieved=%d\n",totalbank);
                  printf("\n");
      printf("How many customers are you expecting today\n");
      scanf("%d",&custo);
      system("cls");
           printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

        water();

  }
  else{
  printf("How many customers are you expecting today\n");
      scanf("%d",&custo);
      system("cls");
           printf("\n******************************************************************************************************************************************************************************\n");
   printf("\n\t\t\t\t\t\t\t\t\t\tWAITING ON WHEELS!!!!\n\n");
      printf("\n******************************************************************************************************************************************************************************\n");

  water();
  }
 
 }

