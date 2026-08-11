class Solution {
    public int maxLength(int[] arr) {
        int n = arr.length;

        HashMap<Long, Integer> mp = new HashMap<>();

        long sum = 0;
        int maxi = 0;

        mp.put(0L, -1);

        for (int i = 0; i < n; i++) {
            sum += arr[i];

            if (mp.containsKey(sum)) {
                int length = i - mp.get(sum);
                maxi = Math.max(maxi, length);
            } else {
                mp.put(sum, i);
            }
        }

        return maxi;
    }
}