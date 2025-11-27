package LATIHAN;
public class latihan_4_perulangan {
    public static void main(String[] args) {
        System.out.println("=== CONTOH BERBAGAI JENIS PERULANGAN");
        System.out.println("");
        
        System.out.println("1. PERULANGAN FOR:");
        System.out.println("Mencetak angka 1-5:");
        for (int i = 1; i <= 5; i++) {
            System.out.println(" Angka: " + i);
        }
        System.out.println("\nFor dengan decrement (5-1): ");
        for (int i = 5; i >= 1; i++) {
            System.out.println(" Angka: " +  i);
            
        }
        System.out.println("\nFor dengan step 2 (bilangan genap 1-10):");
        for (int i = 2; i <= 10; i += 2) {
            System.out.println ("Bilangan genap: " + i);
        }
        System.out.println("-----------------------------------------");
        
        System.out.println("\n2. PERULANGAN WHILE");
        System.out.println("Mencetak angka 1-5:");
        int counter = 1;
        while (counter <= 5) {
            System.out.println(" Anfka : " + counter);
            counter++;
        }
        
        System.out.println("\nWhile dengan kondisi khusus:");
        int passwordAttempt = 1;
        while (passwordAttempt <= 3){
            System.out.println(" Percobaan Login ke" + passwordAttempt);
            passwordAttempt++;
        }
        System.out.println("--------------------------------------");
        
        System.out.println("\n3. PERULANGAN DO-WHILE:");
        System.out.println("Mencetak angka 1-5:");
        int j = 1;
        do {
            System.out.println(" Angka: " + j);
            j++;
        } while (j <= 5);
        
        System.out.println("\nDo-while (jaminan minimal 1x eksekusi):");
        int number = 10;
        do {
            System.out.println(" Nilai:" + number);
            number++;
        } while (number <= 5);
        System.out.println("----------------------------------------");
        
        System.out.println("\n4. PERULANGAN FOR-EACH:");
        System.out.println ("literasi melalui array:");
        
        String[] fruits = {"Apel", "Jeruk", "Mangga", "Pisang"};
        for (String fruit : fruits) {
            System.out.println(" Buah: " + fruit);
        }
        System.out.println("\nliterasi melalui array angka:");
        int[] numbers = {10, 20, 30, 40, 50};
        for (int num : numbers){
            System.out.println(" Nomor:" + num);
        }
        System.out.println("---------------------------------");
        
        System.out.println("\n5. PERULANGAN BERSARANG (Neated Loop):");
        System.out.println("Pola segitiga dengan bintang:");
        
       for (int row = 1; row <= 5; row++) {
           for (int col = 1; col <= row; col++) {
               System.out.print("* ");
           }
           System.out.println();
       }
       System.out.println("-----------------------------------------------");
       
       System.out.println("\n6. KONTROL PERULANGAN (break dan continue): ");
       System.out.println("Menggunakan break (berhenti di angka 3) :");
       
       for (int i= 1; i <= 5; i++) {
           if (i == 4) {
               System.out.println(" Lewati angka 3!");
               continue;
           }
           System.out.println(" Angka: "+ i);
       }
       
       System.out.println("\n== PROGRAM SELESAI ===");
    }
       
 }