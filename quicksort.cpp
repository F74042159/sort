#include<iostream>
using namespace std;
class quick{
	        public:
				void quicksort(int left,int right){//recursive
					if(left<right){
						int i=left;
						int j=right;
						int x=arr[i];
						while(i<j){
							while(j>i){
								if(arr[j]<x){
									arr[i]=arr[j];
									break;
								}
								else j--;
							}
							while(i<j){
								if(arr[i]>x){
									arr[j]=arr[i];
									break;
								}
								else i++;
							}
						}
						arr[i]=x;
						cout<<"i="<<i<<endl;
						quicksort(left,i-1);
						quicksort(i+1,right);
					}
				}

				int arr[8];//data member
};

int main(){
	quick qu;
	cout<<"enter 8 numbers to be sorted:"<<endl;
	for(int i=0;i<8;i++){
		cin>>qu.arr[i];
	}
	qu.quicksort(0,7);
	for(int i=0;i<8;i++){
		cout<<qu.arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
