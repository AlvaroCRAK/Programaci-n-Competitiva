import java.util.ArrayList;
import java.util.Scanner;
public class Main{

    static double anchoMinimo(ArrayList<int[]> carros, double t){
        double min = 1e5;
        double max = -1e5;

        for ( int i = 0; i < carros.size(); i++ ){
            double pos = (double)carros.get(i)[0] + carros.get(i)[1] * t;
            min = Math.min(pos, min);

            max = Math.max(pos, max);
        }
        return max - min;
    }

    static double func(ArrayList<int[]> carros){
        final double EPSILON = 1e-8;

        double low = 0;
        double higth = 1e5;

        while ( higth - low > EPSILON ){

            double mid1 = low + (higth - low) / 3.0;
            double mid2 = higth - (higth - low) / 3.0;

            double ancho1 = anchoMinimo(carros, mid1);
            double ancho2 = anchoMinimo(carros, mid2);

            if ( ancho1 < ancho2 )
                higth = mid2;
            else
                low = mid1;
        }

        return anchoMinimo(carros, low);
    }

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        ArrayList<int[]> carros = new ArrayList<int[]>();
        while(n-- > 0){
            int x = scanner.nextInt();
            int v = scanner.nextInt();

            carros.add(new int[]{x, v});
        }
        System.out.printf("%.7f", func(carros));
    }
}
