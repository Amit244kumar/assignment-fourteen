int main()
{
    int arr[10],i,g=0,f=0;
    printf("Enter the 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<10;i++){
        if(f<arr[i])
          {
              g=f;
              f=arr[i];
          }
    }
    printf("The second largest number is %d",g);
    getch();
    return 0;
}
