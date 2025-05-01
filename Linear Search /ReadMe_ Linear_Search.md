## 🔍 Linear Search – Time and Space Complexity

### ✅ Time Complexity

The time complexity of **Linear Search** depends on how many elements the algorithm needs to check to find the target.

| Case        | Explanation                               | Complexity |
|-------------|-------------------------------------------|------------|
| **Best**    | Target is the first element               | `O(1)`     |
| **Average** | Target is somewhere in the middle         | `O(n)`     |
| **Worst**   | Target is the last element or not present | `O(n)`     |

#### How We Determine Time Complexity:

- **Best Case**: If the target element is the first element in the array, the algorithm only needs one comparison, resulting in a time complexity of `O(1)`.
- **Average Case**: On average, the target is somewhere in the middle of the array. The algorithm will need to check about half of the array’s elements, so the time complexity is approximately `O(n)`.
- **Worst Case**: In the worst case, the target element is either at the last position or not in the array at all. In this case, the algorithm will check all `n` elements, so the time complexity is `O(n)`.

---

### ✅ Space Complexity

The space complexity of **Linear Search** refers to the amount of extra memory the algorithm needs.

| Case    | Explanation                       | Complexity |
|---------|-----------------------------------|------------|
| Always  | No extra space beyond variables   | `O(1)`     |

#### How We Determine Space Complexity:

- **Constant Space**: Linear Search only uses a small, fixed amount of memory, regardless of the input size. It uses a few variables like an index counter but doesn’t create additional data structures or require space proportional to the input size.
- As a result, the space complexity is **O(1)**, meaning it takes constant space.

---

### 📊 Summary

- **Time Complexity**: `O(n)` in the worst case, `O(1)` in the best case.
- **Space Complexity**: `O(1)` constant space.
