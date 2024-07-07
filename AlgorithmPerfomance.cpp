#include <iostream>
#include "d_sort.h"
#include <vector>
#include "d_random.h"
#include "d_timer.h"
using namespace std;
const int n = 10000;


int main()
{
	timer time1, time2, time3, time4, time5;
	randomNumber randx;
	int arr[n] = {};
	int arrSize = sizeof(arr) / sizeof(int);
	for (unsigned int i = 0;i < n;i++)
	{
		arr[i] = randx.random(50);
	}
	vector<int> vec(arr, arr + arrSize);
	vector<int> vec1(arr, arr + arrSize);
	vector<int> vec2(arr, arr + arrSize);
	vector<int> vec3(arr, arr + arrSize);
	vector<int> vec4(arr, arr + arrSize);
	time1.start();
	mergeSort(vec, 1, 50);
	time1.stop();
	time2.start();
	selectionSort(vec1);
	time2.stop();
	time3.start();
	quicksort(vec2, 0, vec2.size());
	time3.stop();
	time4.start();
	exchangeSort(vec3, vec3.size());
	time4.stop();
	time5.start();
	bubbleSort(vec4, vec4.size());
	time5.stop();
	cout << endl << "Vector Size = " << vec.size() << endl;
	cout << endl << "Selection sort time : " << double(time2.time()) << " Second" << endl;
	cout << endl << "Exchange sort time : " << double(time4.time()) << " Second" << endl;
	cout << endl << "Quick sort time : " << double(time3.time()) << " Second" << endl;
	cout << endl << "Merge sort time : " << double(time1.time()) << " Second" << endl;
	cout << endl << "Bubble sort time : " << double(time5.time()) << " Second" << endl;


	return 0;
}
