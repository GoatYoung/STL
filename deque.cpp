#include <iostream>
#include <deque>
using namespace std;
template <class T>
void print(T&deq,char *str)
{
	typename T::iterator it;
	cout<<"The elements of "<<str<<": ";
	for(it=deq.begin();it!=deq.end();it++)
	{
		cout << *it<<" ";
	} 
	cout<<endl;
}
int main()
{
	deque<char>deque_A; //����˫�˶���
	deque_A.push_back('c');
	deque_A.push_back('d');
	
	deque_A.push_front('b');
	deque_A.push_front('a');
	print(deque_A,"deque_A");
	
	//��ʾ��ͷԪ��
	cout<<"The first element of deque_A is "<< deque_A.front()<<endl;
	//��ʾ��βԪ��
	cout<<"The last element of deque_A is " <<deque_A.back()<<endl;
	//�ڶ�β����Ԫ��
	deque_A.insert(deque_A.end(),'x');
	//�ڶ�ͷ����Ԫ��
	deque_A.insert(deque_A.begin(),'z');
	print(deque_A,"deque_A");
	//�ڶ�ͷ������
	deque_A.pop_front();
	//�ڶ�β������
	deque_A.pop_back();
	print(deque_A,"deque_A");
	return 0; 
}
