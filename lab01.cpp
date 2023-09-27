// Example program
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
  {
  double a, g, y,T,m,b,Y,t,f;
  cout << "Введите a= ";
  cin >> a;
  cout << "Введите g= ";
  cin >> g;
  cout << "Введите m= ";
  cin >> m;
  cout << "Введите b= ";
  cin >> b;
  cout << "Введите f= ";
  cin >> f;
  Y = atan(a/g);
  cout << "Y= " << Y << endl;
  T=m*sqrt(a*a+g*g);
  cout << "T= " << T << endl;
  y = atan(-(b*cos(f))/(g*(1-((b*sin(f))/g))));
  cout << "y= " << y << endl;
  t=(m*(sqrt((g*g)+(b*b)-(2*g*b*sin(f)))));
  cout << "t= " << t << endl;

  return 0;
}
