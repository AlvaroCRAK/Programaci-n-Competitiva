import java.util.Scanner;
public class Main {
  public static void main ( String[] args ) {
    Scanner scanner = new Scanner ( System.in );
    String phrase = scanner.nextLine();
    int n, max;
    n = max = 0;
    for ( int i = 0; i < phrase.length(); i++ ) {
      char c = phrase.charAt(i);
      if ( c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' )
        n++;
      else {
        if ( n > max )
          max = n;
        n = 0;
      }
    }
    if ( n > max )
      max = n;
    System.out.println ( max );
  }
}
