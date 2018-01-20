/*Binary Search*/
#include<iostream>

using namespace std;


int compare(int x, int y);
/* return -1 for less than, 0 for equal */
int binsearch(int list[], int target, int left, int right);


int main(){
	int list[10] = {1,2,3,4,5,6,7,8,9};
	cout << binsearch(list,6,0,10);//index
	return 0;
}
int compare(int x, int y){
	if(x == y){
		return 0;
	}else if(x < y){
		return -1;
	}else{
		return 1;
	}
}
int binsearch(int list[],int target,int left,int right){
	int middle;
	while(left <= right){
		middle = (left + right) / 2;
		switch(compare(list[middle],target)){
			case -1 :
				left = middle +1;
				break;
			case 0 :
				return middle;
				break;
			case 1 :
				right = middle-1;
				break;
		}
	}
	return 0;
}

