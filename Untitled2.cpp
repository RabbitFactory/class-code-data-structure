#include<iostream>
using namespace std;
int main()
{
    int i;
    int value;
    cout << "enter value: ";
    cin >> value;

    int shahi[value];
    cout << "enter elements"<<endl;

    for(i=0;i<value;i++)
    {
        cin>> shahi[i];
    }

    cout<<"the array: ";

    for (i=0;i<value;i++)
    {
        cout<< shahi[i];
    }
}
