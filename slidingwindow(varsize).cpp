#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {

  vector<int> v={3,2,4,5,1,1,1,2,3,3},m;
  int count=0,maxcount=-1000,sum=0;
  int k=5;
  
  for(int i=0;i<v.size();i++)
  {
  sum+=v[i];
  cout<<sum<<endl<<" ";
    count++;
  if(sum==k)
    {

      m.push_back(count);
      sum-=v[i-1];
      count--;
      //sum+=v[i];
}
    else if(sum>k){
      
      sum-=v[i-1];
    if(sum==k)
    m.push_back(--count);
    else
    count--;
     //sum+=v[i];
    }
    
  }
  
  sort(m.begin(),m.end());
  cout<<m[m.size()-1];
  }
  
 
