int main()
{
    int arr[10],sum=0;
    printf("Enter the 10 numbers:");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("The smallest number is %d",smallest(arr,10));
    getch();
    return 0;
}

int smallest(int a[],int n)
{
    int i,v=a[0];
    for(i=1;i<n;i++)
    {
        if(v>a[i])
            v=a[i];
    }
    return v;
}
