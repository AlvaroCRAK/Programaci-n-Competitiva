import java.util.Scanner;
public class Main {
  public static void main ( String[] args ) {
    Scanner scanner = new Scanner ( System.in );
    String phrase = scanner.next();
    String pattern = scanner.next();
    for ( int i = 0; i < phrase.length(); i++ ) {
      if ( phrase.charAt(i) == pattern.charAt(0) ) {
        if ( phrase.length() - i + 2 < pattern.length() )
          continue;
        boolean temp = true;
        for ( int j = 0; j < pattern.length(); j++ ) 
          if ( pattern.charAt(j) != phrase.charAt(i+j) ) {
            temp = false;
            break;
          }
        if ( temp ) 
          System.out.println ( i + 1 );
      }
    }
  }
}
