class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for char in s:
            if char == '(':
                stack.append(char)
            elif char == '[':
                stack.append(char)
            elif char == '{':
                stack.append(char)
            elif char == ')':
                if len(stack) == 0:
                    return False
                elif(stack[len(stack)-1] == '('):
                    stack.pop()
                else:
                    return False
            elif char == ']':
                if len(stack) == 0:
                    return False
                elif(stack[len(stack)-1] == '['):
                    stack.pop()
                else:
                    return False
            elif char == '}':
                if len(stack) == 0:
                    return False
                elif(stack[len(stack)-1] == '{'):
                    stack.pop()
                else:
                    return False
            else:
                return False
        if len(stack) == 0:
            return True
        return False