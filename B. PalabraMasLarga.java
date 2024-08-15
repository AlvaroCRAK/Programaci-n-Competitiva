import java.util.Scanner;
public class Main{
  static int function(String phrase){
    int n = 0, max = 0;
    for ( int i = 0; i < phrase.length(); i++ ){
      char c = phrase.charAt(i);
      if ( c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' )
        n ++;
      else {
        if ( n > max )
          max = n;
        n = 0;
      }
    }
    if ( n > max )
      max = n;
    return max;
  }
  public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    String phrase = scanner.nextLine();
    System.out.println( function(phrase) );
  }
}
