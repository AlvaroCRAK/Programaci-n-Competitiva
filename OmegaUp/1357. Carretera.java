import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
    static double dis(int[][] cars, double time) {
        double max = -1e5;
        double min = 1e5;
        for (int i = 0; i < cars[0].length; i++) {
            double pos = (double)cars[0][i] + cars[1][i] * time;
            max = Math.max(max, pos);
            min = Math.min(min, pos);
        }
        return max - min;
    }

    static double func(int[][] cars) {
        double low = 0;
        double high = 1e5;
        final double EPSILON = 1e-6;
        while (high - low >= EPSILON) {
            double mid1 = low + (high - low) / 3;
            double mid2 = high - (high - low) / 3;

            double distance1 = dis(cars, mid1);
            double distance2 = dis(cars, mid2);

            if (distance1 < distance2)
                high = mid2;
            else
                low = mid1;
        }
        return dis(cars, low);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] firstLine = br.readLine().split(" ");
        int n = Integer.parseInt(firstLine[0]);
        int[][] cars = new int[2][n];

        for (int i = 0; i < n; i++) {
            String[] carData = br.readLine().split(" ");
            cars[0][i] = Integer.parseInt(carData[0]);
            cars[1][i] = Integer.parseInt(carData[1]); 
        }

        System.out.printf("%.6f", func(cars));
    }
}
