#include<iostream>

bool prime(int num); 

int main(){
	int value;
	std::cin >>value;
	if(value>1){
	if(prime(value)){
		std::cout<<"bard "<<std::endl;
	}
	else{
		std::cout << "parz "<<std::endl;
	}
	}else{
		std::cout<<"eror"<<std::endl;
	}	
}
bool prime(int num){
if(num>1){
	for(int i=2;i<num;++i){
		if(num % i==0){
			return true;
			}
		else{
			return false;
			}	
		}
	}
}
