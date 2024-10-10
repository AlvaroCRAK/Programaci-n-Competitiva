#include <iostream>
#include <vector>
using namespace std;

struct Car {
  int x;
  int v;
};

double distance ( vector<Car> car, double time ) {
  double distance_max = -1e5;
  double distance_min = 1e5;
  for ( int i = 0; i < car.size(); i++ ) {
    double distance_car = (double) car[i].x + car[i].v * time;
    distance_max = max ( distance_car, distance_max );
    distance_min = min ( distance_car, distance_min );
  }
  return distance_max - distance_min;
}

double func ( vector<Car> car ) {
  const double EPSILON = 1e-7;
  double max = 1e5;
  double min = 0;
  while ( max - min >= EPSILON ) {
    double time1 = min + ( max - min ) / 3;
    double time2 = max - ( max - min ) / 3;

    double distance_1 = distance ( car, time1 );
    double distance_2 = distance ( car, time2 );
    
    if ( distance_1 < distance_2 )
      max = time2;
    else 
      min = time1;
  }
  return distance ( car, min );
}

int main () {
  int n;
  cin >> n;
  vector<Car> cars(n); 
  while ( n-- ) {
    int x, v;
    cin >> x;
    cin >> v;
    Car car;
    car = { x, v };
    cars[n] = car;
  }
  printf ( "%.7f", func ( cars ) );
}
