n = 11  # 11x11 grid
arena = [[1 for _ in range(n)] for _ in range(n)]

center = n // 2  # middle of grid = 5 for n=11

with open("sample.txt", "r") as f:
    for line in f:
        line = line.strip()  # remove spaces and newline

        if not line:  # skip empty lines
            continue

        N, E, S, W = map(int, line.split())

        # ---------------- NORTH ----------------
        for i in range(1, N + 1):
            row = center - i
            col = center
            if 0 <= row < n:
                arena[row][col] = 0

        # ---------------- SOUTH ----------------
        for i in range(1, S + 1):
            row = center + i
            col = center
            if 0 <= row < n:
                arena[row][col] = 0

        # ---------------- EAST ----------------
        for j in range(1, E + 1):
            row = center
            col = center + j
            if 0 <= col < n:
                arena[row][col] = 0

        # ---------------- WEST ----------------
        for j in range(1, W + 1):
            row = center
            col = center - j
            if 0 <= col < n:
                arena[row][col] = 0


print("Arena Map (1 = safe, 0 = obstacle):")
for row in arena:
    print(row)