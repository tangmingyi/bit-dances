import sys
def init_list(a_lt:list):
    for index,line in enumerate(sys.stdin):
        if(index==0):
            continue
        x,y=line.strip().split()
        a_lt.append([int(x),int(y)])

def printMixNode(nodes:list):
    xMax = -1
    for node in nodes:
        if(node[0]>xMax):
            xMax = node[0]
            print("%d %d"%(node[0],node[1]))


if __name__ == '__main__':
    nodes = []
    init_list(nodes)
    nodes.sort(reverse=True,key=lambda a:a[1])
    printMixNode(nodes)

