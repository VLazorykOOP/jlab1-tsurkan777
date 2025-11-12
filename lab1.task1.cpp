import java.util.Scanner;

public class ExpressionCalculation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        
        System.out.print("Введіть a: ");
        double a = sc.nextDouble();
        System.out.print("Введіть b: ");
        double b = sc.nextDouble();

        
        double result1 = (a * b - (a + b) * (a - b)) / (Math.pow(b, 4) + Math.pow(a, 3)) + 5 * b;
        System.out.println("1) Результат (double → double): " + result1);

        
        int aInt = (int) a;
        int bInt = (int) b;
        double result2 = (aInt * bInt - (aInt + bInt) * (aInt - bInt)) /
                (Math.pow(bInt, 4) + Math.pow(aInt, 3)) + 5 * bInt;
        System.out.println("2) Результат (int → double): " + result2);

        
        int result3 = (int) ((a * b - (a + b) * (a - b)) / (Math.pow(b, 4) + Math.pow(a, 3)) + 5 * b);
        System.out.println("3) Результат (double → int): " + result3);
    }
}
