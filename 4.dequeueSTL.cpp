#include <bits/stdc++.h>
using namespace std;

void print(deque<int>dq){
	for(int i=0;i<dq.size();i++){
		cout<<dq[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
}
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif

    //Initisalize
	//1. simple
	deque<int>f;
	f.push_back(100);
	f.push_back(200);
	f.push_back(300);
	f.push_back(400);
	f.push_back(500);
	f.push_front(600);
	f.push_front(700);
	f.push_front(800);
	f.push_front(900);
	f.push_front(1000);

	//2. same element
	deque<int>s(4,200);

	//3.iterating
	deque<int>t(s.begin(),s.end());

	//4.copy from another
	deque<int>fo(f);

	//5. copy from array
	int arr[]={1,2,3,4,5,6,7,77,88,66};
	int n=sizeof(arr)/sizeof(int);
	deque<int> fi(arr,arr+n); 

	print(f);
	print(s);
	print(t);
	print(fo);
	print(fi);

	deque<int>dq;

	cout<<"pushing: 10 20 30 to back ";
	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	print(dq);

	cout<<"pushing 40 50 60 to front: ";
	dq.push_front(40);
	dq.push_front(50);
	dq.push_front(60);
	print(dq);

	cout<<"pop 2 element from back : ";
	dq.pop_back();
	dq.pop_back();
	print(dq);

	cout<<"pop 2 element from front : ";
	dq.pop_front();
	dq.pop_front();
	print(dq);

	//for each loop
	for(auto x:dq){
		cout<<x<<" ";  //40 10
	}
	cout<<endl;


	//access element
	int x=dq[0];
	int y=dq.at(0);
	cout<<x<<" "<<y<<endl;

}