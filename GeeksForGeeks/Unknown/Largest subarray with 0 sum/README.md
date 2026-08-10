# Largest subarray with 0 sum

| Field | Value |
|-------|-------|
| **Platform** | GeeksForGeeks |
| **Difficulty** | Unknown |
| **Language** | cpp |
| **Solved On** | August 10, 2026 |
| **Link** | [View Problem](https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1) |

## Approach

larget_subArray 
Bas 3 lines ka core yaad rakho 🧠
sum += arr[i];

↓

if (mp.find(sum) != mp.end())

↓

maxi = max(maxi, i - mp[sum]);

Aur first occurrence preserve karne ke liye:

else {
    mp[sum] = i;
}

That's the entire optimal idea:

index    value    prefix sum

 0        1          1
 1        2          3
 2       -3          0
 3        4          4
 4       -4          0
 5        5          5
