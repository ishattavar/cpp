#include<bits/stdc++.h>
using namespace std;
int main(){
    // fill
    /*array<int,50> arr;//by default it contains garbage values
    arr.fill(12);
    for(int i=0; i<50; i++){//for(auto it: arr) cout<<it<<" ";
        cout<<arr[i];
    }

array<int,5> arr;
cout<<"enter the values in array";
for(int i=0;i<5;i++){
    cin>>arr[i];

}
for(auto i:arr)
cout<<i<<" ";
cout<<endl;
reverse(arr.begin()+155,arr.end());
for(auto j:arr)
cout<<j<<" "
*/
vector<int> vec;
int n,val;
cout<<"enter number of elements";
cin>>n;
for(int i=1;i<=n;i++){
    cin>>val;
    vec.push_back(val);
    
}
//vec.push_back(2);
//vec.emplace_back(45);
for(auto n : vec)
cout<<n<<" ";
return 0;

}