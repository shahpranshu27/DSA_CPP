#include<stdio.h>

#define MAX 100

int getMaxElement(int []);  // takes array of int as parameter
int size;

int main()
{
    int arr[MAX], max, i;
    printf("\n\nEnter the size of the array: ");
    scanf("%d", &size);
    printf("\n\nEnter %d elements\n\n", size);

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max = getMaxElement(arr);   // passing the complete array as parameter
    printf("\n\nLargest element of the array is %d\n\n", max);
    return 0;
}

int getMaxElement(int a[])
{
    static int i = 0, max =- 9999;  // static int max=a[0] is invalid
    if(i < size)   // till the last element
    {
        if(max < a[i])
        max = a[i];

        i++;    // to check the next element in the next iteration
        getMaxElement(a);   // recursive call
    }
    return max;
}
