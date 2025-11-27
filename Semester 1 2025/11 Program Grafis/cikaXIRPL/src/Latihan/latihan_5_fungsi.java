package Latihan;
import java.util.Scanner;

public class latihan_5_fungsi {
    public static int pangkat(int angka, int pangkat){
        int hasil = 1;
        for (int i = 1; i <= pangkat; i++) {
            hasil *= angka;
        }
        return hasil;
     }
    
     public static void main(String[] args) {
         Scanner input = new Scanner(System.in);
         System.out.print("Masukkan angka: ");
         int angka = input.nextInt();
         System.out.print("Masukkan pangkat: ");
         int pangkat = input.nextInt();
         int hasil = pangkat(angka, pangkat);
         System.out.println(angka + " ^ " + pangkat + " = " + hasil);
     }
}
