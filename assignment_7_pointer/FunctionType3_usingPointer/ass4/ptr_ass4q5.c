void oper(int*,int*);
void main()
{
	int n,cho;
	printf("Enter the number for operation : ");
	scanf("%d",&n);
	printf("\nSelect choice for operation\n 1.Even or Odd\n 2.Prime\n 3.Pallindrome\n 4.Positive,Negative or Zero\n 5.Reverse\n 6.Sum of Digits");
	printf("\n\nChoice : ");
	scanf("%d",&cho);
	oper(&n,&cho);
}
void oper(int *no,int *choice)
{
	if((*choice)==1)
	{
		if((*no)%2==0)
		{
			printf("\n%d :Even number",*no);
		}
		else
		{
			printf("\n%d :Odd number",*no);
		}
	}
	else if((*choice)==2)
	{
		int status=0;	
		for(int i=2;i<(*no)-1;i++)
		{
			if((*no)%i==0)
			{
				status=1;
			}
		}
		if(status==0)
		{
			printf("\n%d :Prime number",*no);
		}
		else
		{
			printf("\n%d :Not prime number",*no);
		}
	}
	else if((*choice)==3)
	{
		int temp=(*no),rev=0,rem;
		for(int i=(*no);(*no)>0;i++)
		{
			rem=(*no)%10;
			rev=rev*10+rem;
			(*no)=(*no)/10;
		}
		if(rev==temp)
		{
			printf("\n%d :Pallindrome",temp);
		}
		else
		{
			printf("\n%d :Not Pallindrome",temp);
		}
	}
	else if((*choice)==4)
	{
		if((*no)>0)
		{
			printf("\n%d :Positive Number",*no);
		}
		else if((*no)<0)
		{
			printf("\n%d :Negative Number",*no);
		}
		else
		{
			printf("\n%d :Zero",*no);
		}
	}
	else if((*choice)==5)
	{
		int rem,rev=0,temp=(*no);
		for(int i=(*no);(*no)>0;i++)
		{
			rem=(*no)%10;
			rev=rev*10+rem;
			(*no)=(*no)/10;
		}
		printf("\n%d is reverse of %d",rev,temp);
	}
	else if((*choice)==6)
	{
		int rem,sum=0,temp=(*no);
		for(int i=(*no);(*no)>0;i++)
		{
			rem=(*no)%10;
			sum=sum+rem;
			(*no)=(*no)/10;
		}
		printf("\n%d is sum of digit of %d",sum,temp);
	}
	else
	{
		printf("Enter correct choice");
	}
}