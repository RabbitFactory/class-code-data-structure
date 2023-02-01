#include<iostream>
using namespace std;
 int main()
 {
     int n,i, sum=0;
     cout << "enter array value: "<<endl;
     cin >> n;
     int shahi[n];
     cout <<"enter the elements: "<<endl;
     for(i=0;i<n;i++)
     {
         cin>>shahi[i];
         sum +=shahi[i];
     }
cout<< "sum is: " << sum ;
 }
