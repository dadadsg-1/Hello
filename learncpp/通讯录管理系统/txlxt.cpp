#include<iostream>
#include<string>
#define MAX 1000//最大人数
using namespace std;

struct person//联系人结构体
{
	string m_name;//姓名
	int m_sex;//1.男 2.女
	int m_age;//年龄
	string m_tel;//电话
	string m_add;//地址
};

struct addbooks //通讯录结构体
{
	person person_array[MAX];//联系人数组
	int m_size;//当前记录人数

};

void showmenu()//展示菜单函数
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出系统   *****" << endl;
	cout << "************************" << endl;
}

void addperson(addbooks *abs)//添加联系人函数
{
//判断当前通讯录是否已满
	if(abs->m_size == MAX)
	{
		cout << "通讯录已满，无法继续添加！" << endl;
	}
	else
	{
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->person_array[abs->m_size].m_name = name;
		
		int sex = 0;;
		cout << "请输入性别： " << endl;
                cout << "1.男 " << endl;
		cout << "2.女 " << endl;
		while(true)
		{
			cin >> sex;
			if(sex==1||sex==2)
			{
				abs->person_array[abs->m_size].m_sex = sex;
				break;
			}
			else
			{
				cout << "请重新输入：" << endl;
			}
		}
	
		int age = 0;
		cout << "请输入年龄： " << endl;
                cin >> age;
		abs->person_array[abs->m_size].m_age = age;
	
		string tel;
		cout << "请输入电话： " << endl;
                cin >> tel; 
		abs->person_array[abs->m_size].m_tel = tel;
	
		string adds;
		cout << "请输入地址： " << endl;
                cin >> adds; 
		abs->person_array[abs->m_size].m_add = adds;
			
		abs->m_size++;
		cout << "添加成功" << endl;
		
		system("clear");
	}
}

void showperson(addbooks *abs)
{
//判断人数是否为0，如果为0，提示空
	if (abs->m_size == 0)
	{
		cout << "当前通讯录内容空！" << endl;
	}
	else
	{
		for(int i = 0;i<abs->m_size;i++)
		{
			cout << " 姓名:" << abs->person_array[i].m_name << "\t" 
			     << " 性别:" << (abs->person_array[i].m_sex == 1?"男":"女")  << "\t"
			     << " 年龄:" << abs->person_array[i].m_age << "\t"
			     << " 电话:" << abs->person_array[i].m_tel << "\t"
			     << " 地址:" << abs->person_array[i].m_add
		  	     << endl;
		}
	}
}

int exist(addbooks *abs,string name)//检测是否存在某人
{
	for(int i = 0;i<abs->m_size;i++)
	{
		if(abs->person_array[i].m_name == name)
		{
			return i;
		}
	
	}
	return -1;
}

void delperson(addbooks *abs) //删除
{
	cout << "请输入姓名：" << endl;
	string name;
	cin >> name;
	int ret = exist(abs,name);
	if (ret != -1)
	{
		for(int i = ret;i<abs->m_size;i++)
		{
			abs->person_array[i] = abs->person_array[i+1];
		}
		abs->m_size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

}

void findperson(addbooks *abs)//寻找联系人
{
	cout << "请输入需要查找的联系人：" << endl;
	string name;
	cin >> name;
	int ret = exist(abs,name);
	if(ret != -1)
	{
		cout << " 姓名:" << abs->person_array[ret].m_name << "\t"
                             << " 性别:" << (abs->person_array[ret].m_sex == 1?"男":"女")  << "\t"
                             << " 年龄:" << abs->person_array[ret].m_age << "\t"
                             << " 电话:" << abs->person_array[ret].m_tel << "\t"
                             << " 地址:" << abs->person_array[ret].m_add;
	}
	else
	{
		cout << "查无此人" << endl;
	}

}

void modperson(addbooks *abs)
{
	cout << "请输入需要修改的联系人" << endl;
	string name;
	cin >> name;
	int ret = exist(abs,name);
        if(ret != -1)
        {
		string name;
                cout << "请输入姓名： " << endl;
                cin >> name;
                abs->person_array[ret].m_name = name;

                int sex = 0;;
                cout << "请输入性别： " << endl;
                cout << "1.男 " << endl;
                cout << "2.女 " << endl;
                while(true)
                {
                        cin >> sex;
                        if(sex==1||sex==2)
                        {
                                abs->person_array[ret].m_sex = sex;
                                break;
                        }
                        else
                        {
                                cout << "请重新输入：" << endl;
                        }
                }

		int age = 0;
                cout << "请输入年龄： " << endl;
                cin >> age;
                abs->person_array[ret].m_age = age;

                string tel;
                cout << "请输入电话： " << endl;
                cin >> tel;
                abs->person_array[ret].m_tel = tel;

                string adds;
                cout << "请输入地址： " << endl;
                cin >> adds;
                abs->person_array[ret].m_add = adds;

        
                cout << "修改成功" << endl;

	}
	else
        {
                cout << "查无此人" << endl;
        }

}

void cleanperson(addbooks *abs)
{
	abs->m_size = 0;
	cout << "已清空" << endl;
	system("clear");
}

int main()
{
	addbooks abs;//创建通讯录结构体
	abs.m_size = 0;

	int select = 0;//创建选择
	while(true)
	{
		showmenu();//调用菜单
	
		cin >> select;

		switch(select)
		{
	
		case 1://添加
			addperson(&abs);
			
			break;

		case 2://显示
			showperson(&abs);
			break;

		case 3://删除
			delperson(&abs);
               		break;
		
		case 4://查找
			findperson(&abs);
              		break;
		
		case 5://修改
			modperson(&abs);
                	break;
	
		case 6://清空
               		cleanperson(&abs);
			break;
			
		case 0://退出
			cout << "欢迎下次使用" << endl;
                	return 0;
			break;
		default:
			break;
	
		}
	}
        return 0;
}

