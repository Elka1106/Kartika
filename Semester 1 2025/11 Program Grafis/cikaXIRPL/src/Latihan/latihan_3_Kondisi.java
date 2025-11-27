package latihan;

import java.util.Scanner;
        
public class latihan_3_Kondisi {
    public static void main (String[] args) {
        Scanner input = new Scanner (System.in);
        
        System.out.print("Masukkan nilai siswa: ");
        double nilai = input.nextDouble ();
        
        if (nilai >=85 && nilai <=100) {
            System.out.println("Nilai huruf: A");
            System.out.println("Excellent!");
        }
        else if (nilai >= 75 && nilai < 85) {
            System.out.println("Nilai huruf; B");
            System.out.println("Good job!");
        }
        else if (nilai >= 65 && nilai < 65) {
            System.out.println("Nilai huruf; c");
            System.out.println("Fair");
        }
        else if (nilai >= 50 && nilai < 65) {
            System.out.println("Nilai huruf: D");
            System.out.println("Need improvement");
        }
        else if (nilai >= 0 && nilai < 50) {
            System.out.println("Nilai huruf: E");
            System.out.println("Failed");
        }
        else {
            System.out.println("Nilai tidak valid!");
        }
    }
}