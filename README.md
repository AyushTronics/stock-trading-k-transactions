# 📈 Stock Trading with K Transactions (Dynamic Programming)

## 🧠 Problem Overview
Given an array of stock prices where prices[i] represents the price of a stock on day i, 
the goal is to maximize profit using at most k transactions.

Each transaction consists of one buy and one sell operation.

---

## ⚙️ Approach

This solution uses **state-compressed Dynamic Programming**.

- Each transaction has 2 actions → Buy and Sell.
- Total actions = 2 * k.
- Odd action index  → Buy state
- Even action index → Sell state

Instead of maintaining separate DP tables for buy and sell,
we model each action sequentially using parity.

We also optimize space to **O(k)** using a single 1D array.

Additionally:
- If k > n/2, we limit it to n/2 since more transactions are not possible.

---

## ⏱ Complexity

Time Complexity: O(n * k)  
Space Complexity: O(k)

---

## 💡 Key Insight

Actions alternate strictly between buy and sell.
By encoding each action as a DP state,
we simplify the transition logic and reduce memory usage.

This makes the solution scalable and clean for generalized k transactions.

---

## 📌 Example

Input:
prices = [3,2,6,5,0,3]
k = 2

Output:
7
---

## 🚀 Extensions

- Can be expanded to a 2D DP formulation.
- Can be converted to handle unlimited transactions efficiently.
- Can be extended with cooldown or transaction fee constraints.




