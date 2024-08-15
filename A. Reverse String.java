import java.util.Scanner;
public class Main{
  static String function(String word){
    char[] wordChar = word.toCharArray();
    for ( int i = 0; i < word.length(); i++ )
      wordChar[i] = word.charAt( wordChar.length - i - 1 );
    String wordString = new String(wordChar);
    return wordString;

  }
  public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    String word = scanner.nextLine();
    System.out.println(function(word));
  }
}
