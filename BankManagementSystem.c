#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct bank
{
char name[100],dob[100],address[100],phno[100],acno[100],tod[100];
int amt;
int cno;
}obj[2];
void new_acc()
{
int i=0;
for(i=0;i<2;i++)
{
scanf("%s",&obj[i].name);
scanf("%s",&obj[i].dob);
scanf("%s",&obj[i].address);
scanf("%s",&obj[i].phno);
scanf("%s",&obj[i].acno);
scanf("%s",&obj[i].tod);
scanf("%d",&obj[i].cno);
scanf("%d",&obj[i].amt);
}
}
void view_list()
{
new_acc();
int i=0;
while(i<2){
printf("%d",obj[i].cno);
printf(" ");
printf("%s",obj[i].name);
printf(" ");
printf("%s",obj[i].dob);
printf(" ");
printf("%s",obj[i].address);
printf(" ");
printf("%s",obj[i].phno);
printf(" ");
printf("%s",obj[i].acno);
printf(" ");
printf("%s",obj[i].tod);
printf(" ");
printf("%d",obj[i].amt);
printf(" ");i++;
printf("\n");}
}
void edit()
{
    new_acc();
    int i;
int h;scanf("%d",&h);char k[100],m[100];gets(k);gets(m);
for( i=0;i<2;i++)
{
if(obj[i].cno==h)
{
strcpy(obj[i].address,k);
strcpy(obj[i].phno,m);
}
}
}
void transact()
{
    new_acc();
int i,h,k,p;
scanf("%d",&h);
scanf("%d",&k);
scanf("%d",&p);
for( i=0;i<2;i++)
{
if(k==obj[i].cno)
{
if(h==1)
{
printf("Deposit");
obj[i].amt+=p;
}
else
{
printf("withdraw");
obj[i].amt-=p;
}
}
}
}

void see()
{
    int i;
for( i=0;i<2;i++)
{
float y=0,r=6;
if(strcmpi(obj[i].tod,"1")==0)
{
y=1*r*obj[i].amt*0.01;
printf("%f",y);
}
else if(strcmpi(obj[i].tod,"2")==0)
{
y=2*r*obj[i].amt*0.01;
printf("%f",y);}
else if(strcmpi(obj[i].tod,"3")==0)
{
y=3*r*obj[i].amt*0.01;
printf("%f",y);}
printf(" ");
printf("%s",obj[i].acno);
printf(" ");
printf("%s",obj[i].name);
printf(" ");
printf("%s",obj[i].dob);
printf(" ");
printf("%d",obj[i].cno);
printf(" ");
printf("%s",obj[i].address);
printf(" ");
printf("%s",obj[i].phno);
printf(" ");
printf("%s",obj[i].tod);
printf(" ");
printf("%d",obj[i].amt);
printf(" ");
}
}
void menu()
{
int choice;
scanf("%d",&choice);
switch(choice)
{
case 1: new_acc();
case 2: {
    see();break;
    }
case 3:  {view_list();break;}
case 4: {edit();break;}
case 5: {transact();break;}
default: {break;}
      }
      }
int main()
{
menu();
return 0;
}
