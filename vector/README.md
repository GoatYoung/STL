# STL
#### Vector
###### 头文件
#include\<vector>
###### 定义

```c
vector<int>vec1; //定义一个空的vector
vector<int>vec2(vec1);//用vec1来初始化vec2
vector<int>vec3[20];//定义一个二维大小的vector 低维相当于动态一维数组
```
###### 增加元素

```c
vec1.push_back(100);//在vector末尾添加100；
vec1.push_back(3,100);//添加3个100	
```
###### 删除元素

```c
vec1.pop_back();//删除末尾元素
vec1.erase(vec1.begin(),vec1.end());//删除之间的元素，	其他元素前移
vec1.clear();//清空元素
```
###### 插入元素

```
vec1.insert(vec1.begin(),5,3)//在开头插入5个3
```
##### 其他操作

```c
bool isEmpty = vec1.empty();    //判断是否为空,返回值true或false
int size = vec1.size();         //元素个数
cout<<(vec1==vec2)?true:false;  //判断是否相等==、！=、>=、<=...
```
##### 遍历操作

```c
int length = vec1.size();
for(int i=0;i<length;i++)
{
	cout << vec1[i]<<endl;
}
```
#### 实例
将学生成绩转换为标准分

```c
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<double> scorevector; //创建向量
	double max,temp;
	cout << "Input -1 to stop:"<<endl;
	cout << "Enter the original score 1:";
	cin >>max;
	scorevector.push_back(max);
	for(int i=1;true;i++)
	{
		cout << "Enter the original score "<<i+1<<":";
		cin >> temp;
		if(temp == -1)
			break;
		scorevector.push_back(temp);
		if(temp>max)
			max = temp;
		
	}
	max/=100;
	cout << "Output the standard scores:"<<endl;
	for(int i=0;i<scorevector.size();i++)
	{
		scorevector[i]/=max;
		cout<<scorevector[i]<<" ";
	}
	cout << endl;
	return 0;
} 
```
Input -1 to stop:
Enter the original score 1:76
Enter the original score2:92
Enter the original score3:84
Enter the original score4:-1
Output the standard scores:
82.6087 100 91.3043
##### 参考资料
https://blog.csdn.net/weixin_37944374/article/details/78690705