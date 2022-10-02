#include <bits/stdc++.h>
using namespace std;


/*array stl is passed by value so 
we need it to pass by reference using '&' */

void updateArray(array<int , 6> &a,int i,int val){
	a[i]=val;
}

//function of print array...we can passed by value
//but copy will be passed
//we can make it const as value is not changing

void print(const array<int,6> &a /* or only a */){
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

/*

PASSED BY VALUE
void print(array<int,6> a ){
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
*/



//main function
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif

    //syntax
    array<int,6> arr={1,2,3,4,5,6};

    //size of the array
    int n=arr.size();
    cout<<n<<endl;

    //print array
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
    }
    cout<<endl;

    updateArray(arr,2,1000);
    print(arr);

    //sorting 
    array<int ,7> arr2={10,3,6,1,99,3,11};
    sort(arr2.begin(),arr2.end());
    for(int i=0;i<arr2.size();i++){
    	cout<<arr2[i]<<" ";
    }
    cout<<endl;

    
    
    //arr.fill
    array<int,10>fives;
    fives.fill(5);  //each positon 5

    for(int i=0;i<10;i++){
    	cout<<fives[i]<<" ";
    }
    cout<<endl;


    //for each loop
    for(int x : arr){
    	cout<<x<<" ";
    }
    cout<<endl;
}

