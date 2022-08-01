int main()
{
    int n;
    printf("Enter the size of arrya",n);
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter %d elements of first array",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    printf("The second array elements\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    getch();
    return 0;
}
