# Valid Palindrome

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | October 6, 2026 |
| **Tags** | Two Pointers, String |
| **Link** | [View Problem](https://leetcode.com/problems/valid-palindrome/) |
| **Runtime** | 0 ms |
| **Memory** | 9.9 MB |

## Problem Description

<p>A phrase is a <strong>palindrome</strong> if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.</p>

<p>Given a string <code>s</code>, return <code>true</code><em> if it is a <strong>palindrome</strong>, or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "A man, a plan, a canal: Panama"
<strong>Output:</strong> true
<strong>Explanation:</strong> "amanaplanacanalpanama" is a palindrome.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "race a car"
<strong>Output:</strong> false
<strong>Explanation:</strong> "raceacar" is not a palindrome.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> s = " "
<strong>Output:</strong> true
<strong>Explanation:</strong> s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>s</code> consists only of printable ASCII characters.</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: 🚀Super Clean |C++ ✅|Easy code with explanation  | O(n)
**Author**: [@msfxvenom](https://leetcode.com/msfxvenom/)
**Upvotes**: 726 👍
**Link**: [View Original Post](https://leetcode.com/problems/valid-palindrome/solutions/3572960/)

---

# Intuition
By reading the question you may think that first we need to convert the string to desired form and then check if its a valid palindrome or not.

But all of that is just distraction you can check valid palindrome by simply using two pointers no need to convert.

<!-- Describe your first thoughts on how to solve this problem. -->

# Approach

If a character is not alphanumeric we can simply ignore it and update our pointer to next character (for both pointers)

and then we check by converting the alphanumeric character to lowercase (tolower() function on numbers has no change)
if those two are not equal then return false(not palindrome)
else update both pointers and continue.

Finally after all checking if reach at last then string must be a valid palindrome so return true.
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity:$$O(n)$$
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:$$O(1)$$ since only use two pointers
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```
class Solution {
public:
    bool isPalindrome(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])){start++; continue;}
           if(!isalnum(s[end])){end--;continue;}
           if(tolower(s[start])!=tolower(s[end]))return false;
           else{
               start++;
               end--;
           }
       }
       return true;
}
};
```
## PS - Please upvote (bottom left) if this solution was helpful :) It motivates me to write more solutions


</details>
