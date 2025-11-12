import java.util.*;

public class UnionSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        
        System.out.print("Введіть кількість елементів масиву A (до 500): ");
        int n = sc.nextInt();
        int[] A = new int[n];

        System.out.println("Введіть елементи масиву A:");
        for (int i = 0; i < n; i++) {
            A[i] = sc.nextInt();
        }

        
        System.out.print("Введіть кількість елементів масиву B (до 200): ");
        int m = sc.nextInt();
        int[] B = new int[m];

        System.out.println("Введіть елементи масиву B:");
        for (int i = 0; i < m; i++) {
            B[i] = sc.nextInt();
        }

        
        Set<Integer> union = new HashSet<>();

        for (int x : A) {
            union.add(x);
        }

        for (int x : B) {
            union.add(x);
        }

        
        int sum = 0;
        for (int x : union) {
            sum += x;
        }

        
        System.out.println("\nЕлементи об’єднання A ∪ B:");
        for (int x : union) {
            System.out.print(x + " ");
        }

        System.out.println("\nСума елементів об’єднання: " + sum);
    }
}
