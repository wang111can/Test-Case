#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<ctime>
#include<algorithm>
using namespace std;

void sswap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void Qsort(int* arr, int left, int right)
{
	if (left >= right)return;
	int key = arr[left];
	int prev = left;
	int cur = right;
	while (prev < cur)
	{
		while (arr[prev] <= key && prev < cur)prev++;
		while (arr[cur] >= key && prev < cur)cur--;
		if (cur > prev)swap(arr[cur], arr[prev]);


	}
	swap(arr[cur], key);
	Qsort(arr, left, cur);
	Qsort(arr, cur+1, right);


}

int main()
{

	string n = "123";
	 next_permutation(n.begin(),n.end());
	 cout << n;
	//srand(time(0));
	//int count = 10;
	////while (count--) {
	//	int arr[100];
	//	for (int i = 0; i < 100; i++)
	//	{

	//		arr[i] = rand()%11;
	//	}
	//	Qsort(arr, 0, sizeof(arr) / 4 - 1);
	//	for (auto i : arr)
	//		cout << i << ' ';
	//	cout << endl;
	//}
}