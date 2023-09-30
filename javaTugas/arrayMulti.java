public class arrayMulti {
    public static void main(String[] args) {
        // Deklarasi dan inisialisasi sebuah array dua dimensi (3x3)
        int[][] matrix = {
                { 1, 2, 3 },
                { 4, 5, 6 },
                { 7, 8, 9 }
        };

        // Menampilkan isi dari matriks
        System.out.println("Isi matriks:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println(); // Pindah ke baris berikutnya
        }
    }
}
