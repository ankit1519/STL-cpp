#include <bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif

    //by default it is max heap --> sorted in descending order -> returns max element using top()
    priority_queue<int>heap;
    int arr[]={1000,30,21,45,65,82,31,90,98,73};

    for(int x:arr){
    	heap.push(x);
    }
    while(!heap.empty()){
    	cout<<heap.top()<<" ";
    	heap.pop();
    }
    cout<<endl;


//Syntax for min heap
    priority_queue<int , vector<int> , greater<int>> minheap;
    for(int x:arr){
    	minheap.push(x);
    }

    while(!minheap.empty()){
    	cout<<minheap.top()<<" ";
    	minheap.pop();
    }
    cout<<endl;


}