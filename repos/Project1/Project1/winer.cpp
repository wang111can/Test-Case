#define  _CRT_SECURE_NO_WARNINGS 1
#include"class.h"

long long  My_atol(char *s)//仅能转换一段以数字开头的字符串
{
	long res = 0;
	long num = 0;
	int n = 0;//记录符号位
	if (*s == '-')
		n = 1;
	while (*s >= '0' && *s <= '9')
	{
		num = *s++ -'0';
		if (n)
			num = -num;//如果符号位为负数，进行负数运算
		res = res * 10 + num;
		
	}
	return res;

}


void Show(int n)
{

	cout << n << ' ';
}

//template < class T>
//int reduce( T arr[], int n)
//{
//	sort(arr, arr + n);
//	T *pt=unique(arr, arr + n);
//
//	//list<int> l1(arr,arr+n);
//	//l1.insert(l1.begin(), arr, arr + n);
//	//l1.unique();
//	//for_each(l1.begin(), l1.end(), Show);
//	//auto Begin = l1.begin();
//	//for (int i=0; Begin != l1.end();i++, Begin++)
//	//	{
//	//	arr[i] = *Begin;
//	//}
//
//	return pt-arr;
//}

void Cpp_1()
{
	string l1;
	getline(cin, l1);


	string tmp;
	for (int i = 0; i < l1.size(); i++)
	{
		if (isalpha(l1[i]))
		{
			tmp += tolower(l1[i]);
		}
	}

	string tamp = tmp;
	reverse(tamp.begin(), tamp.end());
	if (tmp == tamp)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	/*
	string tmp = l1;
	reverse(tmp.begin(),tmp.end() );
	if (tmp == l1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
		*/

		/*string::iterator left = l1.begin();
		string::iterator right = l1.end() - 1;
		while (*left == *right && left != l1.end() - 1 && right != l1.begin()) {
			left++;
			right--;
		}
		if (*left == *right)
			cout << "yes!" << endl;
		else
			cout << "no" << endl;
			*/
}
//
//void Cpp_4()
//{
//	const int NUM = 100;
//	srand(time(0));
//	long arr[NUM];
//	for (int i = 0; i < NUM; i++)
//	{
//		arr[i] = rand() % 100;
//	}
//	for (int j = 0; j < reduce(arr, NUM); j++)
//	{
//		cout << arr[j] << ' ';
//	}
//}
vector<int> lotto(int max, int n)
{
	srand(time(0));
	vector<int> l1;
	
	set<int> MAX;
	while (MAX.size() < max)
	{
		int num = rand() %1000;
		MAX.insert(num);
	}
	vector<int> l2(MAX.begin(), MAX.end());
	for (int i = 0; i < n; i++)
	{
		random_shuffle(l2.begin(), l2.end());
		auto tmp = l2.begin();
		l1.push_back(*tmp);
	}
	return l1;
}

void Cpp_7()
{
	vector<int> winer;
	winer = lotto(51,6);
	for_each(winer.begin(), winer.end(), Show);
}
void Cpp_8()
{

	set<string> Mat;
	set<string> Pat;
	string Friends;

	cout << " Mat Please enter your friend's name  (enter END to end):" << endl;
	while (cin >> Friends && Friends != "END")
	{
		cout << " Mat Please enter your friend's name  (enter END to end):" << endl;
		Mat.insert(Friends);
	}
	cout << endl;

	cout << " Pat Please enter your friend's name (enter END to end):" << endl;
	while (cin >> Friends && Friends != "END")
	{
		cout << " Pat Please enter your friend's name (enter END to end):" << endl;
		Pat.insert(Friends);
	}
	cout << endl;

	ostream_iterator<string, char> Shower(cout, " ");

	cout << "Mat friend's name:" << endl;
	copy(Mat.begin(), Mat.end(), Shower);
	cout << endl;

	cout << "Pat friend's name:" << endl;
	copy(Pat.begin(), Pat.end(), Shower);
	cout << endl;

	cout << "Pat and Mat friend's name:" << endl;
	set_union(Mat.begin(), Mat.end(), Pat.begin(), Pat.end(), ostream_iterator<string ,char>  (cout, " "));

}

void Cpp_9()
{
	srand(time(0));
	const long long  MAX = 100000000;
	
	vector<int> vi0(MAX);

	for (int i = 0; i < MAX; i++)
	{
		vi0.push_back(rand() % 101);
	}

	vector<int> vi(vi0);
	list<int> li(vi0.begin(), vi0.end());
	clock_t begin, end;

	begin = clock();
	sort(vi.begin(), vi.end());
	end = clock();
	cout << "VI sort time :" << double(end - begin)/CLOCKS_PER_SEC << endl;

	begin = clock();
	li.sort();
	end = clock();
	cout << "LI sort time :" << double(end - begin) / CLOCKS_PER_SEC << endl;

	copy(vi0.begin(), vi0.end(), li.begin());
	begin = clock();
	vector<int> v(li.begin(),li.end());
	sort(v.begin(), v.end());
	copy(v.begin(), v.end(), li.begin());
	end = clock();
	cout << "time :" << double(end - begin) / CLOCKS_PER_SEC << endl;

}



void test1()
{
	vector<int> arr;
	vector<int> arr1;

	ostream_iterator<int, char> Shower(cout, " ");
	back_insert_iterator<vector<int>> Pushback(arr1);
	for (int i = 0; i < 10; i++)
	{
		arr.push_back(i);
		/*copy(arr.begin(), arr.end(), Shower);
		cout << endl;*/


		/*arr1.insert(arr1.begin(), arr.end() - 1, arr.end());*/

	}
	//for_each(arr.begin(), arr.end(), Show);
	cout << endl;
	copy(arr.rbegin(), arr.rend(), Pushback);
	for_each(arr1.begin(), arr1.end(), Show);
	cout << endl;

	//arr.erase(arr.begin(), arr.begin() + 10);

	//for_each(arr.begin(), arr.end(), Show);
	//cout << endl;

}
void test2()
{
	list<int> l1;

 }
void test3()
{
	ostream_iterator<string, char> Shower(cout, " ");

	string str[5] = { "one","two","three","four","five" };
	string str1[5] = { "six","seven","eight","nine","ten" };
	set<string> l1(str,str+5);
	set<string> l2(str1, str1 + 5);
	set<string> l3;
	set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(),Shower );//查找交集
	cout << endl;

	set_difference(l1.begin(), l1.end(), l2.begin(), l2.end(), Shower);//返回不同
	cout << endl;

	set_union(l1.begin(), l1.end(), l2.begin(), l2.end(), insert_iterator<set<string>>(l3,l3.begin()));//合并
	//copy(l3.begin(), l3.end(), insert_iterator<set<string>>(l3,l3.begin()));
	cout << endl;


	copy(l3.lower_bound("eight"), l3.upper_bound("ten"),Shower);
	cout << endl;




}
void test4()
{
	multimap<int, string> l1;
	multimap<int, string> l2;
	pair<int, string> ll;
	cin >> ll.first >> ll.second;
	l1.insert(ll);
	auto count = l1.begin();
	for (; count != l1.end(); count++)
		cout << (*count).first << " " << (*count).second;
}

void test5()
{
	
	multimap<int, string> x;
	x.insert(make_pair(5, "beijin"));
	x.insert(make_pair(5, "shanghai"));
	x.insert(make_pair(5, "guangzhou"));
	x.insert(make_pair(5, "shengzheng"));
	x.insert(make_pair(4, "beigi"));
	x.insert(make_pair(6, "beigi"));
	x.insert(make_pair(7, "beigi"));
	x.insert(make_pair(8, "beigi"));
	x.insert(make_pair(1,"beigi"));
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> ptr=x.equal_range(5);
	multimap<int, string>::iterator l1;
	for (l1 = ptr.first; l1!= ptr.second; l1++)
	{


	}




}

void* My_mamcpy(void* x, const void* y, int n)
{
	if (!x || !y)
		return NULL;

	void* res = x;
	char* xx = (char*)x;
	char* yy = (char*)y;

	while (n--){

		*xx = *yy;
		xx++; yy++;
	}

	return res;
}


void* My_memmove(void* x, const void* y, int n)
{
	if (!x || !y)
		return NULL;
	if (x < y){

		void* res = x;
		char* xx = (char*)x;
		char* yy = (char*)y;

		while (n--){

			*xx = *yy;
			xx++; yy++;
		}

		return res;
		
	}
	else if (x >y){

		void* res = x;
		
		while (n--){

		*((char*)x + n )= *((char*)y+n);
						
		}

		return res;
	}
}




	/*int arr[10] = { 0 };
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	My_mamcpy(arr, arr1, sizeof(arr1));
	My_memmove(arr+2, arr, 20);
	for (auto i : arr)
		cout << i << ' ';*/


int My_atoi(const char *x)
{
	int flag = 0;
	if (*x == '-')
	{
		flag = 1;
		x++;
	}int res = 0;
	
	while (*x && *x >= '0' && *x <= '9')
	{
		int tmp = *x++-'0';
		if (flag)
			tmp = -tmp;
		res = res * 10 +tmp;
	
	}

	return res;


}

char* My_strncat(char* x, char* y, int n)
{

	if (x == NULL || y == NULL)
		return NULL;
	char* res = x;

	while (*x)
	{
		x++;
	}
	while (n--)
	{
		*x++=*y++;
		
	}
	*++x = '\0';
	return res;





}
char* My_strncpy(char* x, char* y, int n)
{
	if (x == NULL || y == NULL)
		return NULL;
	char* res = x;
	while (n--)
	{
		*x++ = *y++;

	}
	*x = '\0';
	return res;
}



int main()
{
	const int sz = 100010;
	int arr[] = { 1,1,2,2,3,4,4,5,5,6,7,7,8,8 };
	int prev = 0;
	int cur = 0;
	int count = 0;
	int num = 2;
	while (1)
	{
		
		if (arr[prev] == arr[cur])
		{
			count++;
			cur++;
		}
		 if (arr[prev] != arr[cur]&&count==2)
		{
			prev = cur;
			count = 0;

		}
		if (arr[prev] != arr[cur] && count != 2)
		{
			cout  << arr[prev] << " ";
			prev = cur;
			
			count = 0;
			num--;
			if (!num)
				break;

		}


	}
	

}

	/*pair<set<int>::iterator, set<int>::iterator> ptr = arr.equal_range(3);
	cout << *ptr.first<<*ptr.second;
*/

	//test1();
	//test2();
	//test3();
	//test4();
	//Cpp_1();
	//Cpp_4();
	//Cpp_7();
	//Cpp_8();
	//Cpp_9();
	//test5();
	/*cout.width(30);
	cout << "jjjj";
	cout << "kkk";*/

	/*vector<string> l1;
	ifstream file;
	file.open("c++.txt");
	if (file.is_open() == false){
		return 1;
	}*/

	//4.0
	



