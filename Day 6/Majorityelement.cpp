#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int c=0,i,ele;
    for(i=0;i<n;i++)
    {
        if(c==0) ele=arr[i];
        if(ele==arr[i]) c++;
        else c--;
    }
    
    c=0;
    for(i=0;i<n;i++) if(arr[i]==ele) c++;
    if(c>n/2)
        return ele;
    return -1;
}
