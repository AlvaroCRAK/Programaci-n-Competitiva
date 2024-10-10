import java.util.Scanner;
public class Main {
  public static void main ( String[] args ) {
    Scanner scanner = new Scanner ( System.in );
    String phrase = scanner.nextLine();
    int info = 0;
    for ( int i = 0; i < phrase.length(); i++ ) {
      char c = phrase.charAt(i);
      if ( c > 'F' && c < 'K' )
        info += 15;
      else 
        info += 11;
    }
    System.out.println ( info );
  }
}
