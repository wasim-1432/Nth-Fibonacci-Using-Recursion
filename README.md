# 🚀 Nth Fibonacci Using Recursion + Memoization (DP)

This project demonstrates how to solve the **Nth Fibonacci Number** problem using **Recursion with Dynamic Programming (Memoization)** in **C++**.

---

## 📌 Problem Statement

Given a number `n`, find the `n-th` Fibonacci number.

The Fibonacci sequence follows:

\[
F(n) = F(n-1) + F(n-2)
\]

Where:

- `F(0) = 0`
- `F(1) = 1`

---

## 🧠 Approach Used

This solution uses:

- ✅ Recursion
- ✅ Dynamic Programming
- ✅ Memoization

Memoization helps avoid recalculating the same Fibonacci values repeatedly, making the solution much faster than normal recursion.

---

## ⚡ Time Complexity

| Approach | Time Complexity |
|----------|----------------|
| Normal Recursion | \(O(2^n)\) |
| Memoization (Used Here) | \(O(n)\) |

---

## 💻 C++ Code

```cpp
class Solution {
  public:
  
    int Solve(int n, vector<int> &dp)
    {
        if(n == 0)
        {
            return 0;
        }

        if(n == 1)
        {
            return 1;
        }

        if(dp[n] != -1)
        {
            return dp[n];
        }

        dp[n] = Solve(n-1, dp) + Solve(n-2, dp);

        return dp[n];
    }

    int nthFibonacci(int n) {
        
        vector<int> dp(n+1, -1);

        return Solve(n, dp);
    }
};
```

---

## 📥 Example

### Input
```txt
n = 5
```

### Output
```txt
5
```

### Explanation
Fibonacci sequence:

```txt
0 1 1 2 3 5
```

The 5th Fibonacci number is `5`.

---

## 🔥 Key Concepts Learned

- Recursive Thinking
- Top-Down DP
- Memoization
- Optimizing Recursive Problems
- Reducing Time Complexity

---

## 🛠️ Technologies Used

- C++
- STL (`vector`)
- Recursion
- Dynamic Programming

---

## 📚 What is Memoization?

Memoization is a technique used in Dynamic Programming where already calculated results are stored and reused later to improve performance.

Instead of solving the same subproblem multiple times, we save the answer in a DP array.

---

## 🎯 Why Use Memoization?

Without memoization:

```txt
fib(5)
├── fib(4)
│   ├── fib(3)
│   └── fib(2)
└── fib(3)
```

Here `fib(3)` gets calculated multiple times.

Memoization stores the value after first calculation and reuses it later.

---

## ✅ Advantages

- Faster execution
- Avoids repeated calculations
- Easy to implement
- Great introduction to Dynamic Programming

---

## 📌 Platform

Solved on:

👉 GeeksforGeeks

---

## 👨‍💻 Author

**Mohd Wasim**

- Passionate about DSA & Problem Solving
- Learning C++, DSA, and Development

---

## ⭐ If You Like This Project

Give this repository a ⭐ on GitHub and follow for more DSA solutions and projects.

---
