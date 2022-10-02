
//key stored in ordered way and unique key inserted
//if duplicate key added...just value gets updated
#include <bits/stdc++.h>
using namespace std;

void print(map<string,int>mp){
	if(mp.size()==0){
		cout<<"map is empty"<<endl<<endl;
		return;
	}
	for(auto x:mp){
    	cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl<<endl;
    return;
}
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif

    map<string,int>m;
    m["ankit"]=2;
    m["VJ"]=1;
    m["AJ"]=3;
    m["AR"]=4;

    //insert function ---->>> O(log(n))          m[6]-->logn
     m.insert({"Raj",10});

     //playing with iterator
     cout<<"iterator"<<endl<<endl;
     map<string,int>::iterator it;
     for(it=m.begin();it!=m.end();it++){
     	cout<<it->first<<" "<<it->second<<endl;
     }

     cout<<endl<<endl<<"print by for each"<<endl<<endl;
//print in unordered ways
    for(auto x:m){
    	cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl<<endl;

    //find()  ---- O(logn)
    auto itr=m.find("Ankit");
    if(itr==m.end()){
    	cout<<"NO VALUE "<<endl;
    }else{
    	cout<<itr->first<<" "<<itr->second<<endl;
    }
    auto itr2=m.find("ankit");
    if(itr2==m.end()){
    	cout<<"NO VALUE "<<endl;
    }else{
    	cout<<itr2->first<<" "<<itr2->second<<endl;
    }

    //um.size() 
    cout<<"size of m: "<<m.size()<<endl<<endl;

    //um.erase()     O(logn)

    //method -1 --------->>>>>>>>>>>using iterator
     //first safety check
    auto ii=m.find("ankit");
    if(ii!=m.end()){
    	m.erase(ii);
    }
    print(m);

    //method -2 --->>>>>>>>>>>>>>> direct pass keyyyyyyyyyyyyyyyyyyyyyyyyyyyy
    m.erase("AR");
    print(m);


    m.clear();
    print(m);


}