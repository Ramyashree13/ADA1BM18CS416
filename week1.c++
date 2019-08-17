int main()
{
	int num,res=0,i=0;
	printf("enter the number to check whether it is a perfect square or not\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		res=i*i;
		if(res==num)
		{
			printf("%d\n",i);
		}
	}
	printf("%d\n",(floor(sqrt(num))));

	
}
