#include<iostream>

using namespace std;

void sort(int list[],int n);
void swap(int &a,int &b);
int main(){
	int n;
	cin >> n;
	int* p = new int[n];
	for(int i = 0 ; i < n; i++){
		cin >> p[i];
	}
	sort(p,n);
	for(int i = 0 ; i < n ; i++){
		cout << p[i] << " ";
	}
	return 0 ;
} 

void sort(int list[],int n){
	int min;
	for(int i = 0 ; i < n ;i++){
		min = i;
		for(int j = i ; j < n ; j++){
			if (list[j] < list[min]){
				min = j;
			}	

		}
		swap(list[i],list[min]);
//		for(int i = 0 ; i < n ; i++){
//			cout << list[i] << " ";
//		}
//		cout << " " << i << ":" <<min; 
//		cout << "\n";
//cout << "---------\n";		
	}
}

void swap(int &a,int &b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}


//Example 1: Selection Sort (Cont.)
//void sort(int list[ ], int n)
//{
//for (i=0; i < n-1; i++) {
//min = i;
//for (j = i+1; j < n; j++) {
//if (list[j] < list[min])
//min = j; }
//SWAP(list[i], list[min], temp);
//}
//}
