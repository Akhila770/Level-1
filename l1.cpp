// quetion 1
//Get a number from user and add 2 to that number and print the result?
//code:
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a :");
	scanf("%d",&a);
	b=a+2;
	printf("output:%d ",b);
	
}
// level 1 , quetion 2
//Get a number from user and subtract 5 to that number and print the result?
//code:
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a :");
	scanf("%d",&a);
	b=a-5;
	printf("output:%d ",b);
}

// level 1, quetion 3
//Get a number from user and multiply 3 to that number and print the result?
//code:
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a :");
	scanf("%d",&a);
	b=a*3;
	printf("output:%d ",b);
	
}


//level 1, quetion 4
//Get a number from user and divide by the number 6 and print the quotient?
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a :");
	scanf("%d",&a);
	b=a/7;
	printf("output:%d ",b);
	
}

//level 1, quetion 5
//Get a number from user and divide by the number 8 and print the remainder?

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a :");
	scanf("%d",&a);
	b=a%8;
	printf("output:%d ",b);
	
}

//level 1, quetion 6
//Get  2 digit  number from user and print the one's digit? 
//code:
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two digit number :");
	scanf("%d",&a);
	b=a%10;
	printf("one's digit:%d ",b);
}

//level 1, quetion 7
//Get  2 digit  number from user and print the ten's digit? 
//code:
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a :");
	scanf("%d",&a);
	b=a/10;
	printf("output:%d ",b);
	
}

//level 1, quetion 8
//Get  three digit  number from user and print the one's digit? 
//code:
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter three digit number :");
	scanf("%d",&a);
	b=a%10;
	printf("output:%d ",b);
}

//level 1, quetion 9
//Get  three digit  number from user and print the hundered's digit? 
//code:
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three digit number :");
	scanf("%d",&a);
	b=a/10;
	c=b/10;
	printf("output:%d ",c);
}

//level 1, quetion 10
//Get  three digit  number from user and print the ten's digit? 
//code:
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three digit number :");
	scanf("%d",&a);
	b=a/10;
	c=b%10;
	printf("output:%d ",c);
}

//level 1, quetion 11
//Get  two digit  number from user and print sum the digits? 
//code:
#include<stdio.h>
int main()
{
	int a,i,rem,q,c;
	printf("enter two digit number :");
	scanf("%d",&a);
	q=a/10;
	printf("%d\n",rem1);
	rem=a%10;
	printf("%d\n",rem2);
	c=rem1+rem2;
	printf("sum:%d ",c);
}
//level 1, quetion 12
//Get  three digit  number from user and print sum the digits? 
//code:
#include<stdio.h>
int main()
{
	int a,i,rem,q,sum;
	printf("enter three digit number :");
	scanf("%d",&a);
	rem=0;
	sum=0;
	while(a!=0)
	{
		rem=a%10;
		sum=sum+rem;
		a = a/10;
	}
	printf("sum:%d ",sum);
}

//level 1, quetion 13 
//Get  two digit  number from user and print reverse of the number? 
//code:
#include<stdio.h>
int main()
{
	int a,i,rem,rev;
	printf("enter two digit number :");
	scanf("%d",&a);
    rev=0;
    while(a!=0)
    {
    	rem=a%10;
    	rev=rev*10+rem;
    	a=a/10;
	}
	
    printf("reverse number: %d",rev)  
}

//level 1, quetion 15
//Get  four digit  number from user and only reverse the first two digits,then print the number? 
//code:
#include<stdio.h>
int main()
{
	int a,i,rem,rev;
	printf("enter two digit number :");
	scanf("%d",&a);
    rev=0;
   while(i!=2)
    {
    	rem=rem*10+a%10;
    	a=a/10;
    	i++;
	}
	
    a=a*100+rem;
    printf("output: %d",a);
}
//level 1, quetion 9
//Get  three digit  number from user and print the hundered's digit? 
//code:
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three digit number :");
	scanf("%d",&a);
	b=a/10;
	c=b/10;
	printf("output:%d ",c);
}
