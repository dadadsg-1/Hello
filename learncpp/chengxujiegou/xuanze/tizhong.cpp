//有三只猪ABC，分别输入体重，判断谁最重。
#include<iostream>
#include<string>
using namespace std;
int main(){
	int A = 0;
	cout << "请输入A的体重：" << endl;
	cin >> A;
	cout << "A的体重为：" << A << endl;

	int B = 0;
        cout << "请输入B的体重：" << endl;
        cin >> B;
        cout << "B的体重为：" << B << endl;

	int C = 0;
        cout << "请输入C的体重：" << endl;
        cin >> C;
        cout << "C的体重为：" << C << endl;

	if (A > B)
	{
		if (A > C)
		{
			cout << "A最重" << endl;
		}
		else
		{
			cout << "C最重" << endl;
		}
	}
	else 
	{
		if (B > C)
                {
                        cout << "B最重" << endl;
                }
                else
                {
                        cout << "C最重" << endl;
		}
	}


return 0;
}
