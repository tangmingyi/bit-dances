//
// Created by zb198 on 2019/8/23.
//
#include <iostream>
#include <algorithm>
#include <vector>
struct node{
    int x;
    int y;
};

bool cmd(node a,node b){
    return a.y > b.y;
}
void initNodes(std::vector<node>& nodes){
    for(auto i=nodes.begin();i!=nodes.end();i++){ //auto i:nodes not work maybe you do not have write power
        scanf("%d%d",&i->x,&i->y);
    }
}
void printMaxNode(std::vector<node>& nodes,int n){
    int xMax = -1;
    for(auto i : nodes){
        if(i.x > xMax){
            xMax = i.x;
            printf("x:%d,y:%d \n",i.x,i.y);
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    std::vector<node> nodes(n+1);
    initNodes(nodes);
    std::sort(nodes.begin(),nodes.begin()+n,cmd);
    printMaxNode(nodes,n);
    return 0;
}


