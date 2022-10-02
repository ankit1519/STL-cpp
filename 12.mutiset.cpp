//ordered----> inc order
//O(log n)
//allows multiple values

#include <bits/stdc++.h>
using namespace std;

void printit(multiset<int>ms){
	multiset<int>:: iterator it;
	for(it=ms.begin();it!=ms.end();it++){
		cout<<(*it)<<" ";
	}
	cout<<endl<<endl;
}

void print(multiset<int> ms){
	for(auto it:ms){
		cout<<it<<" ";
	}
	cout<<endl<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif

    multiset<int>ms;
    ms.insert(12);  // O log(n)
    ms.insert(110);
    ms.insert(2);
    ms.insert(99);
    ms.insert(2);
    ms.insert(400000);
    ms.insert(2);
    ms.insert(12);
    ms.insert(1);

    printit(ms);
    print (ms);

//find
    auto itr=ms.find(2);
    if(itr!=ms.end()){
    	cout<<(*itr)<<endl;
    }else{

    }

//erase  ---- erase by iterator delete the first value as iterator points the first value
    if(itr!=ms.end()){
    	ms.erase(itr);
    }

    print(ms);

    //erase by value delete all the value present 
    ms.erase(12);
    print(ms);

}