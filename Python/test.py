# Common imports for competitive programming in Python
import sys
import math
import bisect
import heapq
from collections import deque, Counter, defaultdict
from itertools import permutations, combinations, accumulate

# Fast input
input = sys.stdin.readline

# Function to take an array input of size n along with an additional integer k
def main():
    n, k = map(int, input().strip().split())  # Taking n and k as input
    arr = list(map(int, input().strip().split()))  # Array elements of size n
    
    # Print the array and k to verify
    print(f"k: {k}")
    print(f"Array: {arr}")

if __name__ == "__main__":
    main()