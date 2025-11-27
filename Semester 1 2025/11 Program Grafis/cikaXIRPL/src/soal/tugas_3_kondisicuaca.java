package soal;
import java.util.Scanner;
public class tugas_3_kondisicuaca{
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);

        System.out.println("Masukkan jenis cuaca (cerah, hujan, berawan, salju):");
        String cuacaInput = input.nextLine().toLowerCase();

       
        if (cuacaInput.equals("cerah")) {
            System.out.println("\nCuaca saat ini: CERAH");
            System.out.println("Suhu: 30°C");
            System.out.println("Kelembaban: 40%");
            System.out.println("Angin: 10 km/jam");
            System.out.println("Aktivitas: Cocok untuk piknik atau olahraga.");
        } else if (cuacaInput.equals("hujan")) {
            System.out.println("\nCuaca saat ini: HUJAN");
            System.out.println("Suhu: 22°C");
            System.out.println("Kelembaban: 90%");
            System.out.println("Angin: 15 km/jam");
            System.out.println("Aktivitas: Lebih baik tetap di dalam rumah.");
        } else if (cuacaInput.equals("berawan")) {
            System.out.println("\nCuaca saat ini: BERAWAN");
            System.out.println("Suhu: 25°C");
            System.out.println("Kelembaban: 70%");
            System.out.println("Angin: 12 km/jam");
            System.out.println("Aktivitas: Cocok untuk berjalan santai.");
        } else if (cuacaInput.equals("salju")) {
            System.out.println("\nCuaca saat ini: SALJU");
            System.out.println("Suhu: -5°C");
            System.out.println("Kelembaban: 80%");
            System.out.println("Angin: 20 km/jam");
            System.out.println("Aktivitas: Kenakan pakaian hangat dan hati-hati di jalan.");
        } else {
            System.out.println("\nCuaca tidak dikenali. Silakan masukkan salah satu dari: cerah, hujan, berawan, salju.");
        }
    }
}