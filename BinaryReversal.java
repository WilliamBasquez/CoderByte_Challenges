import java.util.*; 
import java.io.*;

class BinaryReversal {
  public static int numOfBits(int num){
    int bits = 0;

    while(num > 0){
      bits++;
      num = num / 2;
    }
    
    while(bits % 8 != 0)
      bits++;

    return bits;
  }

  public static long newNum(int size, int[] bits){
    long result = 0, power = 1;
    
    for(int i = size-1; i > -1; i--){
      result += bits[i] * power;
      power *= 2;
    }

    return result;
  }

  public static int[] numInBits(String str, int numOfBits){
    int number = Integer.parseInt(str);
    int[] bits = new int[numOfBits];

    for(int o = 0; o < numOfBits; o++){
        bits[o] = number % 2;
        number /= 2;
    }

    return bits;
  }

  public static String BinaryReversalMethod(String str) {
    // code goes here
    int initialNum = Integer.parseInt(str);
    int bits = numOfBits(initialNum);
    int[] result = numInBits(str, bits);
    long newNum = newNum(bits, result);
    str = Long.toString(newNum);

    return str;
  }

  public static void main (String[] args) {  
    // keep this function call here     
    Scanner s = new Scanner(System.in);
    System.out.print(BinaryReversalMethod(s.nextLine()));
    s.close();
  }
}