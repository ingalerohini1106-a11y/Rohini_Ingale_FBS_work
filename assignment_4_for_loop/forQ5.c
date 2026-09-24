void main()
{
    int n=121;
    int choice;
    int i,temp,digit,rev,sum,flag,fact;
    printf("1. Even or Odd\n");
    printf("2. Prime or Not\n");
    printf("3. Palindrome or Not\n");
    printf("4. Positive, Negative or Zero\n");
    printf("5. Reverse Number\n");
    printf("6. Sum of Digits\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            if(n%2==0)
                printf("Even");
            else
                printf("Odd");
            break;
        case 2:
            flag=0;

            for(i=2;i<n;i++)
            {
                if(n%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                printf("Prime");
            else
                printf("Not Prime");
            break;
        case 3:
            temp=n;
            rev=0;

            while(temp>0)
            {
                digit=temp%10;
                rev=rev*10+digit;
                temp=temp/10;
            }

            if(rev==n)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;

        case 4:
            if(n>0)
                printf("Positive");
            else if(n<0)
                printf("Negative");
            else
                printf("Zero");
            break;
        case 5:
            temp=n;
            rev=0;

            while(temp>0)
            {
                digit=temp%10;
                rev=rev*10+digit;
                temp=temp/10;
            }

            printf("Reverse = %d",rev);
            break;
        case 6:
            temp=n;
            sum=0;

            while(temp>0)
            {
                digit=temp%10;
                sum=sum+digit;
                temp=temp/10;
            }
            printf("Sum = %d",sum);
            break;

        default:
            printf("Invalid Choice");
    }
}