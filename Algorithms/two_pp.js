function findSumPair(arr,sum){
    let left =0;
    let right = arr.length-1;

    while(left<right){
        let currentSum = arr[left]+arr[right];
        if(currentSum === sum){
            return [left+1,right+1];
        }
        else if(currentSum < sum){
            left++;
        }else {
            right--;
        }
    }
    return null;
}


let arr=[1,2,3,4,5,6];
const sum = 5;
let ans = findSumPair(arr,sum);
console.log(ans ?? null);
