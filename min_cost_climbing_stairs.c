int min(int x, int y){
    if(x > y)
        return y;
    else
        return x;
}

int minCostClimbingStairs(int* cost, int costSize) {
	int a[1001];
	a[0] = cost[0], a[1] = cost[1];
	for (int i = 2; i < costSize; i++) {
		a[i] = min(a[i - 1], a[i - 2]) + cost[i];
	}
	return min(a[costSize - 1], a[costSize - 2]);
}