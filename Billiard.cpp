#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double Distance(int x, int y)
{
	return sqrt( (double) x * x + y * y );
}

double RadianToDegree(double radian)
{
	return radian * 180 / M_PI;
}

int main()
{
	int a, b, s, m, n;
	
	do
	{
		cin >> a >> b >> s >> m >> n;
		
		if (a == 0 && b == 0 && s ==0 && m ==0 && n ==0)
		{
			break;
		}
		
		double dist = Distance( a * m, b * n );
		double verlocity = dist / s;
		
		double radian = atan( (double) b * n / (a * m) );
		double degree = RadianToDegree(radian);
		
		cout << std::fixed << std::setprecision(2) << degree << " " << std::setprecision(2) << verlocity << endl;
	} while (1);
	return 0;
}