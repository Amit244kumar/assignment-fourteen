int main()
{
    int arr[10],i,g=0,f;
    printf("Enter the 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    f=arr[i];
    for(i=0;i<10;i++){
        if(f>arr[i])
          {
              g=f;
              f=arr[i];
          }
    }
    printf("The second smallest   number is %d",g);
    getch();
    return 0;
}
