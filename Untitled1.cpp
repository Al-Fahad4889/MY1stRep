
#include <bits/stdc++.h>                                                        // |||||||   ||    ||    ||    ||     ||||||
typedef long long int ll;                                                       // ||      ||  ||  ||    ||  ||  ||   ||    ||
typedef double dd;                                                              // |||||  |||||||| |||||||| ||||||||  ||    ||
using namespace std;                                                            // ||     ||    || ||    || ||    ||  ||    ||
//void quickSort(std::string &str, int lb, int ub) {                            // ||     ||    || ||    || ||    ||  ||||||
//int low = lb, high = ub;
//int pivot = str[(low + high) / 2];
///* partition */
//
//do {
//while (str[low] < pivot) low++;
//
//while (str[high] > pivot) high--;
//
//  if (low <= high) {
//    std::swap(str[low], str[high]);
//    low++; high--;
//  }
//}while (low <= high);
//
///* recursion */
//
//  if (lb < high) quickSort(str, lb, high);
//
//  if (low < ub) quickSort(str, low, ub);
//}

///* gcd */
//ll gcd(ll a, ll b)
//{
//    if (a == 0)
//        return b;
//    return gcd(b % a, a);
//}
//ll lcm(ll a, ll b)
//{
//    return (a * b) / gcd(a, b);
//}
//pri2(int a[100000],int g)
//{
//    if(g==-1)
//    {
//
//    }
//    else
//    {
//        cout<<a[g];
//    }
//}
//pri(int i,int n)
//{
//    int a[100000];
//    int j=0;
//    if(i==0)
//    {
//        pri2(a[100000],j-1);
//    }
//    else
//    {
//        a[j]=i%n;
//        j++;
//        pri(i/n,n);
//    }
//}
//recur(int n)
//{
//
//    if(n==0)
//    {
//
//    }
//    else
//    {
//        ll i;
//        cin>>i;
//        pri(i,n);
//        cout<<endl;
//        recur(n-1);
//    }
//}

int main()
{
//    ll c,d,e,n,k,w[100000],f[100000],t,h=0,g=0,l,m,kk;
//    char ch[100][100],dh2,dh3;
//    string s1,s2,s3,s4;
//    vector<int> nums;


//    cin>>t;
//    recur(t);
vector<int>nums;
    for(int i=0;i<4;i++){
        int c;
        cin>>c;
        nums.push_back(c);
    }
    sort(nums.begin(),nums.end());
        stack<int>s;
        int n=nums.size();
         s.push(nums[0]);
        for(int i=1;i<n;i++){
            if(!s.empty()){
                if(nums[i]==s.top()){
                s.pop();
            }
            else
                s.push(nums[i]);
            }
        }
        int m=s.top();
        cout<<m<<endl;

    return 0;
}



