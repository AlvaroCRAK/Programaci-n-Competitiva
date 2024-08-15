import java.util.Scanner;
public class Main{
  static int function(String phrase){
    int n = 0;
    for ( int i = 0; i < phrase.length(); i++ ){
      if ( phrase.charAt(i) > 'F' && phrase.charAt(i) < 'K' )
        n+= 15;
      else
        n+=11;
    }
    return n;
  }
  public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    String phrase = scanner.nextLine();
    System.out.println( function(phrase) );
  }
}
