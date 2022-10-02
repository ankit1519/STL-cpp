#include <bits/stdc++.h>
using namespace std;


void updateArray(int arr[],int i,int val){
	//passed by reference
	arr[i]=val;
}
//print-->> pass the size of the array
void print(int arr[],int x){
	for(int i=0;i<x;i++){
    	cout<<arr[i]<<" ";
    }
}

/*
//sizeof(arr) in fun-->>>>return the size of arr ptr
void asize(int arr2[]){
	cout<<"size of arr int fun : "<<sizeof(arr2);
}
*/


//main funn
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif

    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);

    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }
    cout<<endl;

    //calling function
    updateArray(a,2,100);


    //printing updated one
    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }
    cout<<endl;

    //calling print function
    print(a,n);

    cout<<endl;
    cout<<endl;
    cout<<"size comparision in main and fun: "<<endl;
    cout<<"Size in main is : "<<sizeof(a)<<endl;
    
}