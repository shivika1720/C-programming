main()
{
int t=30,a,b,c;
printf("Maximum Marks= %d\n",t);
printf("Marks in Mathematics= ");
scanf("%d \n",&a);
printf("Marks in English= ");
scanf("%d \n",&b);
printf("Marks in Science= ");
scanf("%d \n",&c);
printf("Percentage= (%d + %d + %d)*100/%d = %d%\n",a,b,c,t,(a+b+c)*100/t);
}
