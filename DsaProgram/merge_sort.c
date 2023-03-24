#include<stdio.h>


mergesort ( a [],int i, int j)
{
    if(i<j)
    {
        mid =i+j/2
        mergesort(a,0,mid)
        mergesort(a,mid+1,j)
        mergesort(a,0,mid,mid+1,j)
    }
    for(i=0;j=0;j<=j2;i++;j++)
    temp[k]=a[i]
}

void merge(int a[],int i1,i2,j1,j2)
{
    int i,j,k
    i=i1
    j=j2
    k=0
    if(i<j)
    {
        while(i<=j1 &&  j<=j2)
        temp[k++]=a[i++]
        else
        temp[k++]=a[j++]
    }
    while(i<=j1)
    temp[k++]=a[i++]
    while(j<=j2)
    temp[k++]<a[j++]
}