import java.util.*;

public class SymmetricWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Введіть текст:");
        String text = sc.nextLine();

        
        String[] words = text.split("[\\s,.:;!?\"()]+");

        System.out.println("Симетричні слова у тексті:");

        boolean found = false;

        
        for (String word : words) {
            if (isSymmetric(word)) {
                System.out.println(word);
                found = true;
            }
        }

        
        if (!found) {
            System.out.println("Симетричних слів немає.");
        }
    }

    
    public static boolean isSymmetric(String word) {
        if (word.isEmpty()) return false;
        word = word.toLowerCase();
        int left = 0, right = word.length() - 1;

        while (left < right) {
            if (word.charAt(left) != word.charAt(right))
                return false;
            left++;
            right--;
        }
        return true;
    }
}
