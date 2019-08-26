//
// Created by zb198 on 2019/8/23.
//
#include <vector>
#include <iostream>

void initVector(std::vector<int>& list,int n){
    for(int i=0;i<n;i++){
        scanf("%d",&list[i]);
    }
}

int FindMax(std::vector<int>& list,int minNum){
    int result=0;
    int sumNum = 0;
    int minList = 101;
    for(auto i:list){
        if(i>=minNum) {
            sumNum += i;
            minList = std::min(minList,i);
        } else {
            result = std::max(result,minList*sumNum);
            minList = 101;
            sumNum = 0;
        }
    }
    return result;
}

int main(){
    int n;
    scanf("%d",&n);
    std::vector<int> list(n);
    initVector(list,n);
    int maxNum = -1;
    for(int i=100;i>=1;i--){
        int temp = FindMax(list,i);
        if(temp > maxNum){
            maxNum = temp;
        }
    }
    printf("%d",maxNum);
}