#include<iostream>

int main(){

const int length = 3;

int **arr = new int*[length];

		
		for(int i = 0;i < length; ++i){
			arr[i] = new int[length];
		}
	
	for(int i=0;i<length;++i){
		for(int j = 0; j < length; ++j) {
			std::cout << arr[i][j];
		}
		std::cout << std::endl; 
	}
	for(int i = 0; i < length; ++i) {
		delete [] arr[i];
	}
	delete [] arr;
	
}
