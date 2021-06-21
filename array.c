main()
{
	int a[10],i,sum=0;
	float avg;
	printf("enter 10 numbers ");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	
	//sum of 10 numbers
	for(i=0;i<=9;i++)
	sum=sum+a[i];
	printf("sum of all 10 numbers is %d ",sum);
	
	avg=sum/10.0;
	printf("average is %f",avg);
}
