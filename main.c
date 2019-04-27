#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAXRATE 0.07
/*Student Name: Davis NetID: Dch360 Compiler Used: GNU GCC Compiler Program Description:This program prints lots and lots of strings!!*/
int main()
{
FILE *fp;
float price1,price2,price3,price4,price5,total1,total2,total3,total4,total5,subtotal,tax,finaltotal;
int QTY1,QTY2,QTY3,QTY4,QTY5;
char item1[40];
char item2[40];
char item3[40];
char item4[40];
char item5[40];
char firstname[40];
char middleI[40];
char lastname[40];
char str1[40]="Description";
char str2[40]="QTY";
char str3[40]="Unit Price";
char str4[40]="Total";
char str5[40]="Subtotal";
char str6[40]="Tax";
char str7[40]="Total";


    fp=fopen("test.txt","r");

    printf("Enter your first name\n");
    fscanf(fp,"%s",firstname);
    printf("Enter your middle initial\n");
    fscanf(fp,"%s",middleI);
    printf("Enter your last name\n");
    fscanf(fp,"%s",lastname);
    printf("Enter your first items name\n");
    fscanf(fp,"%s",item1);
    printf("What is the price of the item\n");
    fscanf(fp,"%f",&price1);
    printf("How many\n");
    fscanf(fp,"%d",&QTY1);
    printf("Enter your second items name\n");
    fscanf(fp,"%s",item2);
    printf("What is the price of the item\n");
    fscanf(fp,"%f",&price2);
    printf("How many\n");
    fscanf(fp,"%d",&QTY2);
    printf("Enter your third items name\n");
    fscanf(fp,"%s",item3);
    printf("What is the price of the item\n");
    fscanf(fp,"%f",&price3);
    printf("How many\n");
    fscanf(fp,"%d",&QTY3);
    printf("Enter your fourth items name\n");
    fscanf(fp,"%s",item4);
    printf("What is the price of the item\n");
    fscanf(fp,"%f",&price4);
    printf("How many\n");
    fscanf(fp,"%d",&QTY4);
    printf("Enter your fifth items name\n");
    fscanf(fp,"%s",item5);
    printf("What is the price of the item\n");
    fscanf(fp,"%f",&price5);
    printf("How many\n");
    fscanf(fp,"%d",&QTY5);
    fgetc(fp);

    total1=price1*QTY1;
    total2=price2*QTY2;
    total3=price3*QTY3;
    total4=price4*QTY4;
    total5=price5*QTY5;
    subtotal=total1+total2+total3+total4+total5;
    tax=TAXRATE*subtotal;
    finaltotal=tax+subtotal;
    printf("\n");
    printf("\n");
    printf("%s\n",firstname);
    printf("%s\n",middleI);
    printf("%s\n",lastname);
    printf("Itemized Receipt\n");
    printf("%s %15s %20s %17s\n",str1,str2,str3,str4);
    printf("%s %20d %17.2f %21.2f   \n",item1,QTY1,price1,total1);
    printf("%s %20d %17.2f %21.2f   \n",item2,QTY2,price2,total2);
    printf("%s %20d %17.2f %21.2f   \n",item3,QTY3,price3,total3);
    printf("%s %20d %17.2f %21.2f   \n",item4,QTY4,price4,total4);
    printf("%s %20d %17.2f %21.2f   \n",item5,QTY5,price5,total5);
    printf("\n");
    printf("\n");
    printf("%60s %.2f   \n",str5,subtotal);
    printf("%60s %.2f   \n",str6,tax);
    printf("%60s %.2f   \n",str7,finaltotal);
    fclose(fp);



}
