#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

#define N 100
int main(){

	std::vector<int> data;
	data.reserve(N);
	for(int i = 0; i < N; i++){
		data.push_back(i);
	}

	/////////////////////////////////////

	int arr[data.size()];
	std::copy(data.begin(), data.end(), arr);

	for(int i = 0; i < data.size(); i++){
		std::cout << arr[i] << ", ";
	}

	std::cout << std::flush << std::endl << std::endl;

	/////////////////////////////////////

	// #1 WORKING
	std::vector<int> newData(arr, arr + data.size());

	// #2 NOT WORKING#
	/*
	std::vector<int> newData;
	newData.reserve(data.size());
	int* arr_ptr = (int*) &arr;
	std::memcpy(newData.data(), arr_ptr, sizeof(int) * data.size()); 
	*/

	// #3 WORKING BUT SLOW
	/*
	std::vector<int> newData;
	newData.resize(data.size());
	int* arr_ptr = (int*) &arr;
	std::memcpy(newData.data(), arr_ptr, sizeof(int) * data.size());
	*/
	

	/////////////////////////////////////

	for(auto i : newData){
		std::cout << i <<", ";
	}

	std::cout << std::flush << std::endl;

	/////////////////////////////////////
}