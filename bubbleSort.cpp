#include<iostream>
using namespace std;
class bubblesort{
	public:
		void bubble(){
			int i,j;
			int temp;
			for(i=7;i>0;i--){
				for(j=7;j>0;j--){
					if(arr[j-1]>arr[j]){//swap
						temp=arr[j];
						arr[j]=arr[j-1];
						arr[j-1]=temp;
					}
				}
				for(int k=0;k<8;k++){
					cout<<arr[k]<<" ";
				}
				cout<<endl;
			}

		}
		int arr[8];
};
int main(){
	bubblesort bu;
	cout<<"enter 8 numbers:"<<endl;
	for(int i=0;i<8;i++)
		cin>>bu.arr[i];
	bu.bubble();
	for(int i=0;i<8;i++)
		cout<<bu.arr[i]<<" ";
	cout<<endl;
	return 0;
}

