/*Selection Problem*/
//select the kth largest among N numbers
#include<iostream>

using namespace std;

void sort(int list[],int n);
void swap(int &a,int &b);
int sel(int list[],int n,int k);

int main(){
	int n,k;
	cin >> n >> k;
	int* list = new int [n];
	for(int i = 0 ; i < n ; i++){
		cin >> list[i];
	} 
	cout << sel(list,n,k);
	return 0;
} 

int sel(int list[],int n,int k){
	sort(list,k);
	for(int i = k ;i < n ; i++){
		if(list[i] > list[k-1]){
			list[k-1] = list[i];
			sort(list,k);
		}
	}
	return list[k-1];
}

void sort(int list[],int n){
	int min;
	for(int i = 0 ; i < n ;i++){
		min = i;
		for(int j = i ; j < n ; j++){
			if (list[j] > list[min]){
				min = j;
			}	

		}
		swap(list[i],list[min]);
	}
}

void swap(int &a,int &b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}


