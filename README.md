# Stock Trading with K Transactions (Dynamic Programming)

## Overview
This project implements a generalized and space-optimized dynamic programming solution 
to maximize profit with at most k stock transactions.

## Key Idea
- Each transaction consists of Buy and Sell.
- Total actions = 2*k.
- Odd index  -> Buy state
- Even index -> Sell state
- State compression reduces space to O(k).

## Complexity
Time: O(n * k)
Space: O(k)

## Insight
Instead of maintaining separate buy and sell arrays,
the algorithm models actions sequentially using parity,
leading to a clean and scalable state transition system.

