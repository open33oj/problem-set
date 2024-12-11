#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int a[N + 5];
int aa[N + 5];
int A[N + 5];
int id[N + 5];
mt19937 rnd(0);
int main()
{
	freopen("hack.in", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout << N << " " << N - 1 << "\n";
	for (int i = 1; i <= N; i++)
		a[i] = i;
	for (int i = 1; i <= N; i++)
	{
		int x = rnd() % (N - 1) + 2;
		int y = rnd() % (N - 1) + 2;
		swap(a[x], a[y]);
	}
	for (int i = 1; i <= N; i++)
		aa[a[i]] = i;
	int now = 0;
	// 1~100 101~500 501~800 801~1000
	for (int i = 1; i <= N; i++)
	{
		if (i == 1)
		{
			A[i] = 100;
			now = 100;
		}
		else if (i <= 100)
		{
			A[i] = rnd() % 100 + 1;
			now += A[i];
		}
		else if (i == 101)
		{
			A[i] = now - 1;
			now += A[i];
		}
		else if (i <= 500)
		{
			A[i] = rnd() % min(now, 1000) + 1;
			now += A[i];
		}
		else if (i == 501)
		{
			A[i] = now;
			now += A[i];
		}
		else if (i <= 800)
		{
			A[i] = rnd() % min(now, 10000) + 1;
			now += A[i];
		}
		else if (i == 801)
		{
			A[i] = now + 1;
			now += A[i];
		}
		else if (i <= 1000)
		{
			A[i] = rnd() % min(now, 100) + 1;
			now += A[i];
		}
	}

	for (int i = 1; i <= N; i++)
		cout << A[aa[i]] << " ";
	cout << "\n";
	for (int i = 2; i <= N; i++)
	{
		int ii;
		if (i <= 100)
		{
			ii = rnd() % ((i - 1) - (1) + 1) + 1; // 1~i-1
			cout << a[ii] << " " << a[i] << "\n";
		}
		else if (i == 101)
		{
			ii = rnd() % ((100) - (1) + 1) + 1; // 1~100
			cout << a[ii] << " " << a[i] << "\n";
		}
		else if (i <= 500)
		{
			ii = rnd() % ((i - 1) - (101) + 1) + 101; // 101~i-1
			cout << a[ii] << " " << a[i] << "\n";
		}
		else if (i == 501)
		{
			ii = rnd() % ((500) - (1) + 1) + 1; // 1~500
			cout << a[ii] << " " << a[i] << "\n";
		}
		else if (i <= 800)
		{
			ii = rnd() % ((i - 1) - (501) + 1) + 501; // 501~i-1
			cout << a[ii] << " " << a[i] << "\n";
		}
		else if (i == 801)
		{
			ii = rnd() % ((800) - (1) + 1) + 1; // 1~800
			cout << a[ii] << " " << a[i] << "\n";
		}
		else if (i <= 1000)
		{
			ii = rnd() % ((i - 1) - (801) + 1) + 801; // 801~i-1
			cout << a[ii] << " " << a[i] << "\n";
		}
	}
	return 0;
}