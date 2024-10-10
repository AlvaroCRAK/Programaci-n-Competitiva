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

/* 
import java.util.Scanner;
public class Main {
  public static void main ( String[] args ) {
    Scanner scanner = new Scanner ( System.in );
    String name = scanner.next();
    char[] nameChar = name.toCharArray();
    for ( int i = 0; i < nameChar.length; i++ ) {
      char c = nameChar[i];
      if ( c >= 'a' && c <= 'z' )
        nameChar[i] -= 32;
      if ( i == 3 ) break;
    }
    System.out.println ( new String ( nameChar ) );
  }
}
*/
