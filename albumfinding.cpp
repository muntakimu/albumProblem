/*
	Author: Muntakimur rahaman
*/

#include<iostream>
using namespace std;

struct Album{
	string Albumname;
	int tracks;
	int year;
};


int BinarSearch(Album arr[],int l,int h,int key);//prototyping
int main(){
	
	Album MyAlbum[30];
	int n;
	int key;
	cout<<"\tEnter The search key(year): ";
	cin>>key;
	//file i/o
	freopen("input.txt","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>MyAlbum[i].Albumname>>MyAlbum[i].tracks>>MyAlbum[i].year;
	}
	int magic=BinarSearch(MyAlbum,0,n-1,key);
	
		
		if(magic!=-1){
			cout<<"\tAlbum found ^_^"<<endl;
			cout<<MyAlbum[magic].Albumname<<MyAlbum[magic].tracks<<endl<<endl;
		}
		else{
			cout<<"\n\tInvalid search ! :( "<<endl;
		
	}
	
		
	}
int BinarSearch(Album arr[],int l,int h,int key){
	if(l<h){
		int mid=(l+h)/2;
		if(arr[mid].year==key){
			return mid;
		}
		if(arr[mid].year<key){
			return BinarSearch(arr,mid+1,h,key);
		}
		
		else
		{	
			return BinarSearch(arr,l,mid-1,key);
			}
		}
	return -1;
	}
