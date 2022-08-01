int main()
{
    int arr[10],sum=0;
    printf("Enter the 10 numbers:");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("The greater number is %d",greater(arr,10));
    getch();
    return 0;
}

int greater(int a[],int n)
{
    int i,v=0;
    for(i=0;i<n;i++)
    {
        if(v<a[i])
            v=a[i];
    }
    return v;
}
