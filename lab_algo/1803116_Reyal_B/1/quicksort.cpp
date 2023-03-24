#include<iostream>
using namespace std;

int parti(int h[],int low,int high){
    int t;
    int i= low-1;
    for(int j=low;j<high;j++){
        if(h[j]<h[high]){
            i++;
            t=h[i];
            h[i]=h[j];
            h[j]=t;
        }
        
    }
    i++;
    t=h[i];
    h[i]=h[high];
    h[high]=t;
    return i;
}

void qsort(int h[],int low,int high){
    if(low>=high){
        return;
    
    }
    int p;
    p = parti(h,low,high);  // necessary partition point 

    qsort(h,low,p-1);
    qsort(h,p+1,high);

}

int main(){
    int i,n;
    cout<<"Enter number of element:";
    cin>>n;
    int *h=new int[n];
    for(i=0;i<n;i++){
        cin>>h[i];
    }
    n--;
    cout<<"Your entered Data"<<"\n";

    for(i=0;i<=n;i++)
    cout<<h[i]<<"\t";

    cout<<"\n\n";
    cout<<"After sorting :"<<"\n";

    qsort(h,0,n);
    for(i=0;i<=n;i++)
    cout<<h[i]<<"\t";
}