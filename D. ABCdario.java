import java.util.Scanner;
import java.util.Arrays;
public class Main{
  static String function(String alphabet){
    boolean[] letters = new boolean[26];
    Arrays.fill(letters, false);
    for ( int i = 0; i < alphabet.length(); i++ ){
      int n = alphabet.charAt(i) - 'a';
      letters[n] = true;
    }
    for ( int i = 0; i < letters.length; i++ )
      if ( letters[i] == false )
        return "NO WAY";
    return "PERFECT";
  }
  public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    int n = scanner.nextInt();
    while(n-- > 0){
      String alphabet = scanner.nextLine();
      System.out.println( function(alphabet) );
    }
  }
}
