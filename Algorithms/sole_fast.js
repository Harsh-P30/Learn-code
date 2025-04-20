function slowFast(arr){
    let slow=0,fast=0;
    while(fast<arr.length-1){
        slow++;
        fast+=2;
    }
    return arr[slow];
}

let arr=[1,2,3,4,5,6,7,8];
console.log(slowFast(arr));
