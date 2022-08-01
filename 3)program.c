int main()
{
    int arr[10],se=0,so=0;
    printf("Enter the 10 numbers:");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            se+=arr[i];
        else
            so+=arr[i];
    }
    printf("The sum of even number is %d\n",se);
    printf("The sum of odd number is %d\n",so);
    getch();
    return 0;
}
