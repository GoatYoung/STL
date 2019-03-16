#include <iostream>
#include <vector>
using namespace std;
struct ball {
	int pos;
	int direction;
};
template <class T>
void print(T&vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout<<vec[i].pos<<" ";
	}
}
int main()
{
	vector<ball>balls;
	int n, L, t;
	cin >> n >> L >> t;
	for (int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		ball tmp;
		tmp.direction = 1;
		tmp.pos = p;
		balls.push_back(tmp);

	}
	for (int i = 0; i < t; i++)
	{
		
		for (int j=0; j < n; j++)
		{
			balls[j].pos += balls[j].direction;
			if (balls[j].pos >= L || balls[j].pos <= 0)
				balls[j].direction *= -1;
			
		}
		for (int k = 0; k < n; k++)
		{
			for (int m = 0; m < n;m++)
				if (balls[m].pos == balls[k].pos && m != k)
					balls[m].direction *= -1;
		}
	}
	print(balls);
	system("pause");
	return 0;
}