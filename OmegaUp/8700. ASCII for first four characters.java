import java.util.Scanner;
public class Main {
  public static void main ( String[] args ) {
    Scanner scanner = new Scanner ( System.in );
    String name = scanner.next();
    for ( int i = 0; i < name.length(); i++ ) {
      System.out.printf ( "%c ASCII value is %d\n", name.charAt(i), (int) name.charAt(i) );
      if ( i == 3 ) break;
    }
  }
}
