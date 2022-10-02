//unordered map use hashtable 
//avg time complexity of insertion,find,erase is O(1)
//we cant insert complex data type
//we can use basic data types and string

#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<string,int>un){
	if(un.size()==0){
		cout<<"unordered map is empty"<<endl<<endl;
		return;
	}
	for(auto x:un){
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

    unordered_map<string,int> um;
    um["ankit"]=2;
    um["VJ"]=1;
    um["AJ"]=3;
    um["AR"]=4;

    //insert function ---->>> O(1)
     um.insert({"Raj",10});

     //playing with iterator
     cout<<"iterator"<<endl<<endl;
     unordered_map<string,int>::iterator it;
     for(it=um.begin();it!=um.end();it++){
     	cout<<it->first<<" "<<it->second<<endl;
     }

     cout<<endl<<endl<<"print by for each"<<endl<<endl;
//print in unordered ways
    for(auto x:um){
    	cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl<<endl;

    //find()  ---- O(1)
    auto itr=um.find("Ankit");
    if(itr==um.end()){
    	cout<<"NO VALUE "<<endl;
    }else{
    	cout<<itr->first<<" "<<itr->second<<endl;
    }
    auto itr2=um.find("ankit");
    if(itr2==um.end()){
    	cout<<"NO VALUE "<<endl;
    }else{
    	cout<<itr2->first<<" "<<itr2->second<<endl;
    }

    //um.size() O(1)
    cout<<"size of um: "<<um.size()<<endl<<endl;

    //um.erase()     O(1)

    //method -1 --------->>>>>>>>>>>using iterator
     //first safety check
    auto ii=um.find("ankit");
    if(ii!=um.end()){
    	um.erase(ii);
    }
    print(um);

    //method -2 --->>>>>>>>>>>>>>> direct pass keyyyyyyyyyyyyyyyyyyyyyyyyyyyy
    um.erase("AR");
    print(um);


    um.clear();
    print(um);


}