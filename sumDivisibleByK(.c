int sumDivisibleByK(int* nums, int numsSize, int k) {
      int freq[101] = {0};  // 1 <= nums[i] <= 100
    
    // Count frequency of each element
    for (int i = 0; i < numsSize; i++) {
        freq[nums[i]]++;
    }
    
    int sum = 0;
    
    // Check which elements have frequency divisible by k
    for (int i = 1; i <= 100; i++) {
        if (freq[i] != 0 && freq[i] % k == 0) {
            sum += i * freq[i];
        }
    }
    
    return sum;
}
