import java.util.Scanner;
public class Main {
  public static void main ( String[] args ) {
    Scanner scanner = new Scanner ( System.in );
    StringBuilder name = new StringBuilder ( scanner.next() );
    for ( int i = 0; i < name.length(); i++ ) {
      char c = name.charAt(i);
      if ( c >= 'a' && c <= 'z' ) 
        name.setCharAt( i, (char) ( c - 32 ) );
      if ( i == 3 ) break;
    }
    System.out.println(name);
  }
}
