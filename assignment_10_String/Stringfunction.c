#include<string.h>
void main()
{
    char a[50]="Hello";
    char b[50]="World";
    char c[50];
    printf("\n---------- String Length ----------");
    printf("\nLength = %d",strlen(a));
    
    printf("\n\n---------- String Copy ----------");
    strcpy(c,a);
    printf("\nCopied string = %s",c);

    printf("\n\n---------- Copy 3 Characters ----------");
    strncpy(c,a,3);
    c[3]='\0';
    printf("\nString = %s",c);

    printf("\n\n---------- Join Strings ----------");
    strcpy(c,a);
    strcat(c,b);
    printf("\nString = %s",c);

    printf("\n\n---------- Join 3 Characters ----------");
    strcpy(c,a);
    strncat(c,b,3);
    printf("\nString = %s",c);

    printf("\n\n---------- Compare Strings ----------");
    printf("\nResult = %d",strcmp(a,b));

    printf("\n\n---------- Compare 3 Characters ----------");
    printf("\nResult = %d",strncmp(a,b,3));

    printf("\n\n---------- First Character ----------");
    printf("\nResult = %s",strchr(a,'l'));

    printf("\n\n---------- Last Character ----------");
    printf("\nResult = %s",strrchr(a,'l'));

    printf("\n\n---------- Find Word ----------");
    printf("\nResult = %s",strstr("Hello World","World"));

    printf("\n\n---------- Split String ----------");
    strcpy(c,"C Language");
    char *p=strtok(c," ");
    while(p!=NULL)
    {
        printf("\n%s",p);
        p=strtok(NULL," ");
    }

    printf("\n\n---------- Starting Characters ----------");
    printf("\nResult = %d",strspn("1234abc","123456789"));

    printf("\n\n---------- Characters Before ----------");
    printf("\nResult = %d",strcspn("Hello,World",","));

    printf("\n\n---------- Matching Character ----------");
    printf("\nResult = %s",strpbrk("Hello","aeiou"));

    printf("\n\n---------- Locale Compare ----------");
    printf("\nResult = %d",strcoll("apple","banana"));

    printf("\n\n---------- Uppercase ----------");
    strcpy(c,"hello");
    strupr(c);
    printf("\nString = %s",c);

    printf("\n\n---------- Lowercase ----------");
    strcpy(c,"HELLO");
    strlwr(c);
    printf("\nString = %s",c);

    printf("\n\n---------- String Transform ----------");
    strxfrm(c,"Hello",50);
    printf("\nString = %s",c);

    printf("\n\n---------- Copy Memory ----------");
    char x[]="Hello";
    memcpy(c,x,6);
    printf("\nString = %s",c);

    printf("\n\n---------- Move Memory ----------");
    strcpy(c,"ABCDE");
    memmove(c+2,c,3);
    c[5]='\0';
    printf("\nString = %s",c);

    printf("\n\n---------- Set Memory ----------");
    memset(c,'X',5);
    c[5]='\0';
    printf("\nString = %s",c);
}