class loopDowhile {
    public static void main(String[] args) {
        int max = 3;
        int i = 1;

        do {
            int j = 1;
            do {
                System.out.println(i + " " + j);
                j++;
            } while (j <= max);
            i++;
        } while (i <= max);
    }
}
