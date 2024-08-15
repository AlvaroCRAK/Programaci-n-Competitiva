import java.util.ArrayList;
import java.util.Scanner;
public class Main{
  static double distance(ArrayList<int[]> cars, double time){
    double max = -1e5;
    double min = 1e5;
    for ( int i = 0; i < cars.size(); i++ ){
      double position = (double)cars.get(i)[0] + cars.get(i)[1] * time;
      max = Math.max(position, max);
      min = Math.min(position, min);
    }
    return max - min;
  }
  static double function(ArrayList<int[] > cars){
    final double EPSILON = 1e-7;
    double max = 1e5;
    double min = 0;
    while ( max - min >= EPSILON ){
      double time_min = min + (max - min) / 3;
      double time_max = max - (max - min) / 3;

      double distance_min = distance(cars, time_min);
      double distance_max = distance(cars, time_max);

      if ( distance_min < distance_max )
        max = time_max;
      else
        min = time_min;
    }
    return distance(cars, min);
  }
  public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    int n = scanner.nextInt();
    ArrayList<int[] > cars = new ArrayList<>();
    while( n -- > 0 ){
      int x = scanner.nextInt();
      int v = scanner.nextInt();
      cars.add(new int[]{x, v});
    }
    System.out.printf("%.7f\n", function(cars));
  }
}
