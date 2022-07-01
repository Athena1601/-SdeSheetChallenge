
#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    
    //initializing the slow and fast pointer to the first number
    int slow = arr[0];
    int fast = arr[0];
    
    do{
        slow = arr[slow];//move the slow pointer by 1
        fast = arr[arr[fast]];//move the fast pointer by 2
    }while(slow!=fast);//unless they meet at some point
    
    fast = arr[0];//take the fast pointer to first position and keep slow at same place where it was.
    
    while(slow!=fast)//start moving fast and slow pointers until they meet
    {
        slow=arr[slow];//move by 1
        fast=arr[fast];//move by 1
    }
    
    return fast;
}
