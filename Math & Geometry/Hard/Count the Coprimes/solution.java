import java.util.*;

class Solution {
    int cntCoprime(int[] arr) {
        
        int n = arr.length;
        int max = 0;

        for (int x : arr) {
            max = Math.max(max, x);
        }

        // Frequency of each number
        int[] freq = new int[max + 1];

        for (int x : arr) {
            freq[x]++;
        }

        // Mobius function
        int[] mu = new int[max + 1];
        int[] primes = new int[max + 1];
        boolean[] composite = new boolean[max + 1];

        int primeCount = 0;
        mu[1] = 1;

        for (int i = 2; i <= max; i++) {

            if (!composite[i]) {
                primes[primeCount++] = i;
                mu[i] = -1;
            }

            for (int j = 0; j < primeCount && i * primes[j] <= max; j++) {

                int p = primes[j];
                composite[i * p] = true;

                if (i % p == 0) {
                    mu[i * p] = 0;
                    break;
                } else {
                    mu[i * p] = -mu[i];
                }
            }
        }

        int ans = 0;

        // Count coprime pairs
        for (int d = 1; d <= max; d++) {

            if (mu[d] == 0)
                continue;

            int count = 0;

            for (int multiple = d; multiple <= max; multiple += d) {
                count += freq[multiple];
            }

            int pairs = count * (count - 1) / 2;

            ans += mu[d] * pairs;
        }

        return ans;
    }
}