#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
struct package{
char pkg_name[20];
};

int cal(int price)
{
double tel_tax=0,vat=0,total=0;
tel_tax = (price/100)*10;
vat = (price/100)*13;
total = tel_tax + vat+price;
printf("\n Here is your Bill: \n");
printf("\n1. Inital price: %d\n 2. 10%% Telecom Tax: %.2f \n 3. 13%% VAT: %.2f \n 4.
Total Price : %.2f\n",price,tel_tax,vat,total);

}

void package(){

int pack=0,ten=0,price=0;

printf("\n Enter 1 for HomeZoom20x\n Enter 2 for SuperSonic 30x\n Enter 3 for SuperFlash
50X\n");
printf("\nChoose your preferable package: ");
scanf("%d",&pack);
printf("\n Enter 1 for 1 month subscription\n Enter 3 for 3 month subscription\n Enter 6 for 6
month subscription\n Enter 12 for 1 year subscription\n");
printf("\nChoose your tenure preferable subscription: ");
scanf("%d",&ten);
{
//HomeZoom20x
if (pack ==1 && ten ==1){
printf("Rate: 1499");
price=1499;
cal(price);
}

else if (pack ==1 && ten==3){
printf("Rate:4199");
price=4199;
cal(price);
}

else if (pack==1 && ten ==6){
printf("Rate: 7499");
price=7499;

cal(price);
}
else if (pack==1 && ten ==12){
printf("Rate: 13999");
price=13999;
cal(price);
printf("\n You are qualified for a lottery prize of 55” SMART TV.\n Check your unique
ID on top of bill\n");
}
//SuperSonic
else if (pack ==2 && ten ==1){
printf("Rate: 1799");
price=17999;
cal(price);
}
else if (pack ==2 && ten==3){
printf("Rate: 4999");
price=4999;
cal(price);
}
else if (pack==2 && ten ==6){
printf("Rate: 9299");
price=9299;
cal(price);
}
else if (pack==2 && ten ==12){
printf("Rate: 17999");

price=17999;
cal(price);
printf("\nYou are qualified for a lottery prize of 55” SMART TV.\n Check your unique
ID on top of bill\n");
}
//Fiber Flash
else if (pack ==3 && ten ==1){
printf("Rate: 2399");
price=2399;
cal(price);
}
else if (pack ==3 && ten==3){
printf("Rate: 6599");
price=6599;
cal(price);
}
else if (pack==3 && ten ==6){
printf("Rate: 12199");
price=12199;
cal(price);
}
else if (pack==3 && ten ==12){
printf("Rate: 23999");
price=23999;
cal(price);
printf("\nYou are qualified for a lottery prize of 55” SMART TV.\n Check your unique
ID on top of bill\n");
}
else
printf("invalid request!!!\n In that case you are required to choose monthly package\n.....Try
Again..... \n");
}

}
int display(){
// printf("package/range \tmonthly\t3months\t6 months 1 year\n
HomeZoom20x\t\t1499\t4199\t7499 \t13999 \n");
// printf("Super Sonic 30X\t 1799\t4999\t9299 \t17999 \n Fiber Flash
50X\t2399\t6599\t12199 \t23999");
// sub();
int a[6][6]={{1499,4199,7499,13999},{1799,4999,9299,17999},{2399,6599,12199,23999}};

struct package pkg1;
struct package pkg2;
struct package pkg3;
strcpy(pkg1.pkg_name,"HomeZoom 20x");
strcpy(pkg2.pkg_name,"SuperSonic 30x");
strcpy(pkg3.pkg_name,"SuperFlash 50x");
printf("\n----List of new package---- \n");
for (int i=0;i<3;i++)
{

if(i==0){
printf("%s\n",pkg1.pkg_name);
}
else if(i==1){
printf("%s\n",pkg2.pkg_name);
}
else{
printf("%s\n",pkg3.pkg_name);
}
for(int j=0;j<4;j++)
{
if(j==0){
printf("1 month=%d \n",a[i][j]);
}
else if(j==1){
printf("3 Months=%d \n",a[i][j]);

}
else if (j==2){

printf("6 Months=%d \n",a[i][j]);
}
else {
printf("1 year= %d\n",a[i][j]);
}

}
printf("\n....................\n");
}
package();
}

int main()
{
char ch;
int cust_id=0;
int rand_num;

srand(time(0));
// rand_num = rand();
rand_num=(rand() % (1000 - 1999 + 1)) + 1999;
cust_id=cust_id+1;
printf("\n\t\t\t\t\tcustomer number:%d \n",cust_id);
printf("\n\t\t\t\t\tcustomer Unique id:%d \n",rand_num);
display();

printf("Do you want to continue next transiction?(y/n):");
scanf (" %c", &ch);
if(ch == 'y' || ch == 'Y'){
srand(time(0));
// rand_num = rand();
rand_num=(rand() % (1000 - 1999 + 1)) + 1999;
cust_id=cust_id+1;
printf("\n\t\t\t\t\tcustomer number:%d \n",cust_id);
printf("\n\t\t\t\t\tcustomer Unique id:%d \n",rand_num);
display();

}
else if(ch == 'n' || ch == 'N'){
printf("\n.....session end.......");
return 0;
}
else{
printf("\n\t\t\t\t\tPlease enter Yes or NO.\n");
printf("%c",ch);
}
return 0;
}