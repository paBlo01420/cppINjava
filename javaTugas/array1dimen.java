class array1dimen {
    public static void main(String[] args) {
        int[] age;

        age = new int[8];

        for (int i = 0; i < 8; i++) {
            age[i] = (i + 1) * 10;
        }

        for (int i = 0; i < 8; i++) {
            System.out.print(age[i] + " ");
        }
    }
}