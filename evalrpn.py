class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        if len(tokens) < 3: return 0
        stack = list()
        for item in tokens:
            if str.isnumeric(item):
                stack.append(int(item))
            else:
                one = stack.pop()
                two = stack.pop()
                if item == '+':
                    stack.append(one + two)
                elif item == '-':
                    stack.append(two - one)
                elif item == '*':
                    stack.append(one * two)
                else:
                    stack.append(two // one)

        return stack[-1] 
            