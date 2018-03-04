#include <stdio.h>
int main()
{
    int arr[100]; 
    int i, n, count = 0;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
    scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
    if(arr[i] < 0)
    {
    count++;
    }
    }
    printf("\nTotal negative elements in array = %d", count);
}
