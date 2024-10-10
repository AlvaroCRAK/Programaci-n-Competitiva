import java.util.Scanner;
import java.util.HashMap;
public class Main {
  static class Car {
    int x;
    int v;
    Car ( int x, int v ) {
      this.x = x;
      this.v = v;
    }
  }
  static double distance ( HashMap<Integer, Car> cars, double time ) {
    double position_max = -1e5;
    double position_min = 1e5;
    for ( int i : cars.keySet() ) {
      double position_car = (double) cars.get(i).x + cars.get(i).v * time;
      position_max = Math.max ( position_max, position_car );
      position_min = Math.min ( position_min, position_car );
    }
    return position_max - position_min;
  }
  static double func ( HashMap<Integer, Car> cars ) {
    final double EPSILON = 1e-7;
    double hight = 1e5;
    double low = 0;
    while ( hight - low >= EPSILON ) {
      double time1 = low + ( hight - low ) / 3;
      double time2 = hight - ( hight - low ) / 3;
      
      double distance_low = distance ( cars, time1 );
      double distance_hight = distance ( cars, time2 );

      if ( distance_low < distance_hight )
        hight = time2;
      else 
        low = time1;
    }
    return ( distance ( cars, low ) );
  }
  public static void main ( String[] args ) {
    Scanner scanner = new Scanner ( System.in );
    int n = scanner.nextInt();
    HashMap<Integer, Car> cars = new HashMap<>();
    while ( n-- > 0 ) {
      int x = scanner.nextInt();
      int v = scanner.nextInt();
      Car car = new Car ( x, v );
      cars.put ( n, car );
    }
    System.out.printf ( "%f", func ( cars ) );
  }
}
