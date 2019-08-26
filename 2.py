import sys
def initList()->list:
    for index,line in enumerate(sys.stdin):
        if(index==1):
            return line.strip().split()

def fingMax(a_lt:list,minNum:int)->int:
    minList = 101
    sumNum = 0
    result = 0
    for i in a_lt:
        i = int(i)
        if(i<minNum):
            result = max(result,sumNum*minNum)
            sumNum = 0
            minList = 101
        else:
            minList = min(minList,i)
            sumNum += i
    return result

if __name__ == '__main__':
    a_lt = initList()
    # a_lt = [6,2,1]
    result = 0
    for i in range(100,1,-1):
        temp = fingMax(a_lt,i)
        result = max(temp,result)
    print("%d"%result)