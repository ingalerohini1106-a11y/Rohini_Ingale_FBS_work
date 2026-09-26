void per(int*,int*);
void main()
{
	int l=10,w=5;
    per(&l,&w);
}
void per(int *len,int *wid)
{
    int p= 2*((*len)+(*wid));
    printf("Perimeter = %d", p);
}