#include<iostream>
#include<vector>
using namespace std;
template <class T>
void print(T&vec)
{
	for(int i=0;i<vec.size();i++)
	{
		cout<< vec[i]<<" ";
	}
}
int eliminate(int index,int k)
{
	if(index%k==0 || index%10==k)
	{
		return 1;
	}
	return 0;
} 
int main()
{
	//#����n��С����
	int n,k;
	vector<int> kids;
	cin >>n>>k;
	for(int i=0;i<n;i++)
	{
		kids.push_back(i+1);
	}
	//��Ϸ��ʼ
	int i=1;
	int preN; //ǰһ�ֺ��ӵ���Ŀ 
	while(true)
	{
		preN = kids.size(); 
//		cout <<"ʣ�ຢ���� ��"<< preN;
		if(preN == 1)
		{
//			cout << "exit";
			break;
		}
		int deletedNum=0; 
		for(int t=1;t<=preN;t++){
			int flag = eliminate(i,k); //�����1����̭
//			cout << "flag:" << flag<<endl;
			if(flag==1)
			{	
				deletedNum++;
				kids.erase(kids.begin()+t-deletedNum);
			}
			i++;
//			cout << "cur kids:"<< kids.size(); 	
		}
//		cout << preN;
	
	} 
	print(kids);
	return 0;
	
} 
