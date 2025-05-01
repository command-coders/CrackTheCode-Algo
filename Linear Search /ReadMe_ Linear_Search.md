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

# Types of Linear Search (Simple Terms)

Linear search is a way to find an item in a list by checking each element one by one. There are a few **types** or **variations** based on how and where the search happens:

## 1. **Basic Linear Search**
- Starts from the beginning of the list.
- Checks each item one by one.
- Stops when the item is found or the list ends.

**Example:**  
Looking for your friend's name in a guest list from top to bottom.

---

## 2. **Sentinel Linear Search**
- A trick to avoid checking end of list every time.
- Adds the target item at the end of the list (called the sentinel).
- Simplifies the loop by ensuring the item will definitely be found.

**Note:** The actual list size is restored after the search.

---

## 3. **Linear Search on Ordered List**
- The list is already sorted.
- Stops early if the current item is greater than the one you're looking for.
- Faster than basic linear search in some cases.

**Example:**  
Looking for the number 25 in a list like [10, 15, 20, 25, 30, 35].  
If you reach 30 and haven’t found 25, you can stop.

---

## 4. **Bidirectional Linear Search**
- Starts checking from both ends of the list at the same time.
- Useful if the item could be anywhere.
- Stops when the item is found or both ends meet.

**Example:**  
Two friends look for a book, one from the start and one from the end of the shelf.

---

## Summary

| Type                    | Key Idea                                  |
|-------------------------|-------------------------------------------|
| Basic                  | Checks from start to end                  |
| Sentinel               | Adds target to end to simplify loop       |
| Ordered                | Stops early in sorted lists               |
| Bidirectional          | Searches from both ends at once           |

### 📊 Summary

- **Time Complexity**: `O(n)` in the worst case, `O(1)` in the best case.
- **Space Complexity**: `O(1)` constant space.
