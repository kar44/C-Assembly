#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib> //handles null pointers
using namespace std;


bool evenSum(int a[], int size){

	int n = size;
	int sum = 0;
	
	for(int i = 0; i<n; i++){
	sum+=a[i];
	}
	return (sum % 2) == 0;	
}


int main(){

int arr[]={4,7,8,3,2};
int s = 4;

cout<<evenSum(arr, s);


return 0;
}
