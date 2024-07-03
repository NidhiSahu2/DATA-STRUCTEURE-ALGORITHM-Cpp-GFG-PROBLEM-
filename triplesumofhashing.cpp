public static boolean find3Numbers(int A[], int n, int X) { 
    // Sort the array in ascending order
    Arrays.sort(A);
    
    // Iterate through the array, considering each element as a potential first number
    for (int i = 0; i < n - 2; i++) {
        int j = i + 1; // Initialize the second pointer
        int k = n - 1; // Initialize the third pointer
        
        // Use a two-pointer approach to find a triplet whose sum equals X
        while (j < k) {
            int sum = A[i] + A[j] + A[k];
            if (sum == X) {
                return true; // Triplet found
            } else if (sum > X) {
                k--; // Decrease the third pointer
            } else {
                j++; // Increase the second pointer
            }
        }
    }
    
    return false; // No such triplet found
}
