//多条件分支
//缺点：判断只能为整形，花火字符型，不能为区间。
//优点：结构清晰，效率高。
#include<iostream>
#include<string>
using namespace std;

int main(){
	int score = 0;
	cout << "请给电影打分:" << endl;
	cin >> score;
	cout << "分数：" << score << endl;
	switch(score)//给电影打分，分类。	
	{
		case 10:
			cout << "经典" << endl;
			break;//退出当前分支
		case 9:
			cout << "经典" << endl;
			break;
		case 8:
			cout << "很好" << endl;
			break;
		case 7:
                        cout << "很好" << endl;
                        break;
		case 6:
                        cout << "一般" << endl;
                        break;
		case 5:
                        cout << "一般" << endl;
                        break;
		default :
			cout << "烂片" << endl;
			break;
	}	

	return 0;
}
