int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--)
       printf("%d ",arr[i]);
    getch();
    return 0;
}
