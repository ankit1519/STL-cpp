#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &vc){
	for(int i=0;i<vc.size();i++){
		cout<<vc[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
}




int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif

    //create vector
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout<<" 1st method : v.push_back "<<endl;
    print(v);
    // 2. fill constructor
    cout<<"2nd method : fill constructor -- all value same"<<endl;
    vector<int>same(4,20);
    print(same);


    //3. simple 
    vector<int> x={1,2,3,4,5,6,7};
    cout<<"3rd : Simple creation"<<endl;
    print(x);

    //4. range constructor
    cout<<"4th :range constructor"<<endl;
    vector<int> rc(x.begin()+1,x.end());
    print(rc);

    //5.copy constructor
    cout<<"5th : copy constructor -- copy 20 20 20 20"<<endl;
    vector<int> cc(same);
    print(cc);

    cout<<endl;
    cout<<endl;
    cout<<endl;

    //methods which are important
    vector<int> vec={1,2,3,4,5,6,7,8};
   int a= vec.at(4);
   int b=  vec[4];
   int c= vec.size();
   int d=vec.capacity();
   int e=vec.max_size();

   cout<<"index at 4 m1 : "<<a <<endl<< "Index at 4 m2 : "<<b<<endl;
   cout<<"size "<<c<<endl<<"capacity "<<d<<endl<<"max_size : "<<e<<endl;
   cout<<endl;
   cout<<endl;
   cout<<endl;
   vector<int> vv;
   vv.reserve(100);

   int n;
   cin>>n;

   for(int i=0;i<n;i++){
   	int nn;
   	cin>>nn;
   	vv.push_back(i);
   	cout<<"size: "<<vv.size()<<" "<<"capacity: " <<vv.capacity()<<endl;
   }

}