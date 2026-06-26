class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // take 1 step or 2, pay cost, climb one or two steps after
        if (cost.size() == 0){
            return 0;
        }else if(cost.size() == 1){
            return cost[0];
        }else if(cost.size() == 2){
            return min(cost[0],cost[1]);
        }

        vector <int> costs(cost.size(),0);

        costs[0] = cost[0];
        costs[1] = cost[1];
        int i = 2;
        int minCost = 0;
        while(i < cost.size()){
            //case where i is at the final step
            if(i+1 >= cost.size()){
                costs[i] = min(cost[i] + costs[i-2], costs[i-1]);
                break;
            }
            costs[i] = cost[i] + min(costs[i-1],costs[i-2]);

            i++;
        }
        return (costs[i]);
    }
};