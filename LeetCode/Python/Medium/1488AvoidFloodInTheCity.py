from collections import deque
class Solution:
    def avoidFlood(self, rains: List[int]) -> List[int]:
        filled = {}
        ans = [1] * len(rains) 
        dryDays = deque()
        for i in range(len(rains)):
            if rains[i] >= 1:
                # checks if lake has been filled or not
                if rains[i] in filled:
                    if len(dryDays) > 0:
                        validDay = False
                        fillDate = filled[rains[i]]
                        # checks for valid dry days
                        for day in dryDays:
                            if(fillDate < day):
                                ans[day] = rains[i]
                                dryDays.remove(day)
                                filled[rains[i]] = i
                                ans[i] = -1
                                validDay = True
                                break
                        # if no valid dry day, floods 
                        if validDay == False:
                            return []
                    # no way to dry, flood happens
                    else:
                        return []
                # fills lake
                else:
                    ans[i] = -1
                    filled.update({rains[i]:i})
            else:
                dryDays.append(i)
        return(ans)