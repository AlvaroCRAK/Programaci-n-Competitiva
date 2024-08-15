import java.util.Scanner;
public class Main{
  static String function(String phrase, String pattern){
    String result = "";
    for ( int i = 0; i < phrase.length(); i++ ){
      if ( phrase.charAt(i) == pattern.charAt(0) ){
        boolean temp = true;
        for ( int j = 0; j < pattern.length(); j++ ){
          if ( phrase.charAt(i + j) != pattern.charAt(j)){
            temp = false;
            break;
          }
        }
        if ( temp )
          result += String.format("%d\n", i + 1);
      }
    }
    return result;
  }
  public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    String phrase = scanner.next();
    String pattern = scanner.next();
    System.out.println( function(phrase, pattern) );
  }
}
