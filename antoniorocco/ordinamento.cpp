/*#include<iostream>
using namespace std;
void ordina(int* array,const int& n);

int main(){
    int n;
    cin>>n;
    int* array=new int[n];
   
    for(unsigned i=0;i<n;i++)
        cin>>array[i];
   
    ordina(array,n);
    cout<<"PROVA"<<endl;
    for(unsigned i=0;i<n;i++)
        cout<<array[i]<<" ";


    delete[] array;
    return 0;
}*/

void ordina(int* array,const int& n)
{   
    int temp=0;
    for(unsigned i=0;i<n;i++)
        for(unsigned j=0;j<n-i-1;j++)
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
}