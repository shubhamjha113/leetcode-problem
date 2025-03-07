class Solution {
    public int threeSumClosest(int[] arr, int target) {
        Arrays.sort(arr); // Sort the array
        int n = arr.length;
        int closestSum = arr[0] + arr[1] + arr[2]; // Initialize closest sum

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;

            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];

                // If found exact target, return immediately
                if (sum == target) {
                    return sum;
                }

                // Update closest sum if current sum is closer to target
                if (Math.abs(target - sum) < Math.abs(target - closestSum)) {
                    closestSum = sum;
                }

                // Move pointers based on sum comparison
                if (sum < target) {
                    left++; // Increase sum
                } else {
                    right--; // Decrease sum
                }
            }
        }
        return closestSum; // Return the closest sum found
    }

}