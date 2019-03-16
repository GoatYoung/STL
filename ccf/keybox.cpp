#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
	int key; //借出的钥匙 
	int bT; //借出时间
	int rT; //返还时间 
}; 
void print(Node* vec,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<< vec[i].key <<" ";
		cout<< vec[i].bT << " ";
		cout<< vec[i].rT <<endl;
		cout << endl;
	} 
}
void printKeyBox(int* keybox,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<< keybox[i] <<" ";
	} 
	cout<< endl;
}
void sort(Node* keys,int k)
{
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<k-i-1;j++)
		{
			if(keys[j].rT > keys[j+1].rT)
			{
				Node temp = keys[j];
				keys[j]=keys[j+1];
				keys[j+1] = temp;
			}
		}
	}
//	return *keys;
}
int main()
{
	Node keys[10000];
	int N,K;
	cin >> N>>K;
	int keybox[2000];
	long maxTime=0;
//	生成N把钥匙
	for(int i=0;i<N;i++)
	{
		keybox[i]=i+1;	
	} 
	for(int i=0;i<K;i++)
	{
		Node tmp;
		int useTime;
		cin >> tmp.key >> tmp.bT >> useTime;
		tmp.rT = useTime+tmp.bT;
		keys[i]=tmp;
		if(maxTime<tmp.rT )
			maxTime = tmp.rT;
	}

	for(int t=1;t<=maxTime;t++)
	{

		for(int i=0;i<K;i++)
		{
			if(t==keys[i].rT)
			{
				for(int k=0;k<N;k++)
				{
					if(keybox[k]==0)
					{
						keybox[k]=keys[i].key;
						keys[i].rT=-1;
						printKeyBox(keybox,N);
						break;
						
					}
				}
				
			}
		}

		for(int i=0;i<K;i++)
		{
			if(t==keys[i].bT)
			{
				for(int j=0;j<N;j++)
					if(keybox[j]==keys[i].key){
						keybox[j]=0; 
						keys[i].bT=-1;
						printKeyBox(keybox,N);
					}

			}
		}
	}
	
	printKeyBox(keybox,N);
}
