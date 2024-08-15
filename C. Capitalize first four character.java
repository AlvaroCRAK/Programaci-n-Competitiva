import java.util.Scanner;
public class Main{
  static String function(String word){
    char[] wordChar = word.toCharArray();
    for ( int i = 0; i < word.length(); i++ ){
      char c = word.charAt(i);
      if ( c >= 'a' && c <= 'z' )
        wordChar[i] -= 32;
      if ( i == 3 )
        break;
    }
    return new String(wordChar);
  }
  public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    String word = scanner.next();
    System.out.println( function(word) );
  }
}
