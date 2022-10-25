// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <deque>
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
using namespace std;
int main()
{
	collection;
	int N, counter,answer=0;
	deque<int> que,answerque;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		que.push_back(i);
	}
	cin >> counter;
	for (int i = 0; i < counter; i++)
	{
		int data;
		cin >> data;
		answerque.push_back(data);
	}
	
	while (answerque.size()>0)
	{
		int index=0,k;
		for (int i = 0; i < que.size();i++)
		{
			if (que.at(i) == answerque.front())
			{
				index = i;
			}
		}
		if (que.front() == answerque.front())
		{
			que.pop_front();
			answerque.pop_front();
		}
		else if(index <=que.size() / 2)
		{
			//왼쪽이동
			que.push_back(que.front());
			que.pop_front();
			answer++;
		}
		else
		{
			//오른쪽이동
			que.push_front(que.back());
			que.pop_back();
			answer++;
		}
	}
	cout << answer;
}

