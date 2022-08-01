int main()
{
    int arr[10],sum=0;
    printf("Enter the 10 numbers:");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("The sum is %d",sum);
    getch();
    return 0;
}
