#include<iostream>
#include<deque>
using namespace std;
template <class T>
void print(T&deq)
{
	typename T::iterator iter;
	for (iter = deq.begin(); iter != deq.end(); iter++)
	{
		cout << *iter << " ";

	}
}
int main()
{
	deque<int>students;
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		students.push_back(i + 1);
	}
	for (int i = 0; i < m; i++)
	{
		int p, q;
		cin >> p >> q;
		for (int j = 0; j < n; j++)
		{
			if (p == students[j])
			{
				students.erase(students.begin() + j);
				if (j + q > n-1)
				{
					students.push_back(p);
				}
				else if(j+q<0)
				{
					students.push_front(p);
				}
				else {
					students.insert(students.begin() + j + q, p);
				}
				
				break;

			}
		}
	}

	print(students);
	//system("pause");
	return 0;
}
