   //Binary Search
#include<iostream>
using namespace std;
int main(){
    //taking input from user
    cout<<"Making Array"<<endl;
    cout<<"Input length of array:";
    int n;
    cin>>n;
    int a[n];
    cout<<"pls enter "<<n<<" elements";
    for(int i=0; i<n;++i){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"What content do you want to search for?:";
    int search_content;
    cin>>search_content;
    // Ferforming Binary search
    int beg=0,mid,end=n;
    while(beg<=end){
        mid=beg+end/2;
        if(search_content==a[mid]){
            cout<<"location:"<<mid<<" position:";
            break;
        }
        else if(search_content<a[mid]){
            end=mid-1;
        }
        else {
            beg=mid+1;
        }
    }
}
