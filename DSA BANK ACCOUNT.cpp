#include<stdio.h>
#include<string.h>
struct bankaccount
{
int accountno,pincode,balance;
char customer[100],type[100],internet[100];
};
int main()
{
int n,i,result,acc;
char internet1[10]="yes";
printf("Enter the number of people : ");
scanf("%d",&n);
struct bankaccount a[100];
for(i=1;i<=n;i++)
{
printf("Write the account bank details of custumer %d :\n",i);
printf("Account no. : ");
scanf("%d",&a[i].accountno);
printf("Name of account holder : ");
scanf("%s",&a[i].customer);
printf("Balance amount : ");
scanf("%d",&a[i].balance);
printf("Do the customer has internet facility or not : ");
scanf("%s",&a[i].internet);
printf("Pincode : ");
scanf("%d",&a[i].pincode);
printf("Account type (saving,recurring,deposit): ");
scanf("%s",&a[i].type);
printf("\n");
}
printf(" BANK DETAILS :");
for(i=1;i<=n;i++)
{
printf("\n For Customer %d\nAccount no. : %d \nName of the customer : %s\nBank 
Balance : %d",i,a[i].accountno,a[i].customer,a[i].balance);
printf("\n");
}
for(i=1;i<=n;i++)
{
if(a[i].balance>1000000)
{
printf("\n %s =The customers are Golden Customers ",a[i].customer);
}
else if (a[i].balance<100000 && a[i].balance>500000)
{
printf("\n %s = The customers are Silver Customers",a[i].customer);
}
else
{
printf("\n %s = The customers are General Customers",a[i].customer);
}
}
}
