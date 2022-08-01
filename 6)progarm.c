int main()
{
    int arr[10],i;
    printf("Enter the 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("The sorted array");
    bubbleSort(arr,10);
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    getch();
    return 0;
}
 void bubbleSort(int ar[],int n)
 {
     printf("d");
     int i,j,temp;
     for(i=0;i<n-1;i++)
     {
          for(j=0;j<n-i-1;j++)
            if(ar[j]>ar[j+1]){
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
     }
 }
