import java.util.Scanner;
public class Main{
  static String function(String name){
    String fun = "";
    for ( int i = 0; i < name.length(); i++ ){
      char c = name.charAt(i);
      fun += String.format("%c ASCII value is %d\n", c, (int)c);
      if ( i == 3 )
        break;
    }
    return fun;
  }
  public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    String name = scanner.next();
    System.out.println( function(name) );
  }
}
