#include<iostream>
#include<vector>
#include<stack>
using namespace std;

template<class T>
void output(T&stackdata)
{
	while(!stackdata.empty())
	{
		cout<<stackdata.top()<<" ";//取出栈顶元素
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
		vec_stack.push(i); //进栈 
	}
	cout<<"Pop from vec_stack:";
	output(vec_stack);
	return 0;
}
