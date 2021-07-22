#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;// number of test cases
    cin>>t;
    while(t)
    {
        t--;
        int n;//number of elements of array
        int k;//key element
        cout<<"Enter size of array: ";
        cin>>n;
        cout<<"\nEnter "<<n<<" elements: "<<endl;
        int arr[n];//array of n elements
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<"\nEnter key element to search :";
        cin>>k;
        int j;
        for(j=0;j<n;j++)
        {
            if(arr[j]==k)
            {
                break;
            }
        }
        if(j!=n)
        {
            cout<<"\nTotal no of comparisions :"<<j+1<<endl;
        }
        else 
        {
            cout<<"Element noy found";
        }
    }
}