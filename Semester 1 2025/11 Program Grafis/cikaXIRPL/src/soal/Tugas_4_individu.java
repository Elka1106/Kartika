package soal;

import java.util.Scanner;
        
public class Tugas_4_individu {
    public static void main (String[] args) {
        Scanner input = new Scanner (System.in);
        
        System.out.print("Masukkan nama guru mata pelajaran (ibu Rahmi Budiman/Ibu Nisa/Ibu Mila): ");
        String nama = input.nextLine();
        
        System.out.println("Jadwal mata pelaran: ");
        System.out.println("Memasukkan nama guru mata pelajaran : ");
        
        if (nama.equals("Ibu Rahmi Budiman")){
            System.out.println("Bahasa indonesia");
        }
        else if (nama.equals ("Ibu Nisa")){
            System.out.println("Pemrograman Website");
        }
        else if (nama.equals("Ibu mila")){
            System.out.println("Mulok");
        }
        else {
            System.out.println("Guru yang tidak mengajar hari ini. ");
        }
    }
}