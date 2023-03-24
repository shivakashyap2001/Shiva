# include<stdio.h>
# include<conio.h>

void printArray(int* arr, int n)
{
    int i;

    printf("array:");
    for(i=0; i<n; i++);
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {2,-1,5,8,4,-4};
    int n = sizeof(arr) / sizeof(arr[0]);

            printArray(arr,n);

    return 0;
}