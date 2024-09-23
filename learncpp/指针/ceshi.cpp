#include<iostream>
using namespace std;
void a(int *arr,int len)
{
	cout << "arr[3]  " << *(arr+3) << endl;
	cout << "arr[3]" << arr[3] <<  endl;
	
}

int main()
{
	int arr[] = {1,2,3,4,5};
	cout << "arr[3]  " << arr[3] << endl;
	cout << "arr[103]  " << arr[103] << endl;
	
	return 0;
}
