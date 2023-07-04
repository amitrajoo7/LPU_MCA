#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{

vector<int> nums={1,4,2,5,7,6};
    cout<< "unsorted :"<< " "<< endl;
for(int x: nums){
cout<<x<<" "<<endl;
}
sort(nums.begin(), nums.end());
cout<< "sorted: "<<" "<<endl;
for(int x:nums){
    cout<<x << " "<<endl;
}
return 0;
}