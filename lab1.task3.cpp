import java.util.*;

public class MatrixSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Введіть розмір матриці n (n ≤ 15): ");
        int n = sc.nextInt();

        double[][] A = new double[n][n];

        System.out.println("Введіть елементи матриці A:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                A[i][j] = sc.nextDouble();
            }
        }

        // 
        double maxBelow = Double.NEGATIVE_INFINITY;
        for (int i = 1; i < n; i++) {          
            for (int j = 0; j < i; j++) {      
                if (A[i][j] > maxBelow) {
                    maxBelow = A[i][j];
                }
            }
        }

        
        
        double sum = 0;
        boolean found = false;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {      
                if (A[i][j] > maxBelow) {
                    sum += A[i][j];
                    found = true;
                }
            }
        }

        
        if (found) {
            System.out.println("Сума елементів, які більші за всі нижчі від діагоналі: " + sum);
        } else {
            System.out.println("Немає елементів, які перевищують усі елементи нижче головної діагоналі.");
        }
    }
}
