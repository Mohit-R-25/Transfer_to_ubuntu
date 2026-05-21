def getconfigs(T, L1, L2, L3, D):
    configs = []
    for i in range(min(L1, T) + 1):
        for m in range(min(L2, T - i) + 1):
            o = T - i - m
            if 0 <= o <= L3 and abs(i - o) <= D:
                configs.append((i, m, o))
    return configs

def minwearcost(Limits, Wear, Targets, D):
    L1, L2, L3 = Limits
    W1, W2, W3 = Wear

    prev_configs = [(0, 0, 0)]
    prev_costs = {(0, 0, 0): 0}

    for T in Targets:
        curr_configs = getconfigs(T, L1, L2, L3, D)
        curr_costs = {}

        for curr in curr_configs:
            min_cost = float('inf')

            for prev in prev_configs:
                cost = prev_costs[prev] + \
                       abs(curr[0] - prev[0]) * W1 + \
                       abs(curr[1] - prev[1]) * W2 + \
                       abs(curr[2] - prev[2]) * W3

                min_cost = min(min_cost, cost)

            curr_costs[curr] = min_cost

        prev_configs = curr_configs
        prev_costs = curr_costs

    return min(prev_costs.values())