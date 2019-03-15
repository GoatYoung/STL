#include<iostream>
#include<vector>
#include<stack>
using namespace std;

template<class T>
void output(T&stackdata)
{
	while(!stackdata.empty())
	{
		cout<<stackdata.top()<<" ";//ȡ��ջ��Ԫ��
		stackdata.pop(); 
	}
	cout<<endl;
}

int main()
{
//	stack<int> int_s;
	stack<int,vector<int> >vec_stack;
	for(int i=0;i<4;i++)
	{
		//int_s.push(i);
		vec_stack.push(i); //��ջ 
	}
	cout<<"Pop from vec_stack:";
	output(vec_stack);
	return 0;
}
