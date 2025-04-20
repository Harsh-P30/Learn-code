// function slidingWindow(arr,winSize){    
//     let ans=[];

//     for(let i=0;i<arr.length - winSize+1;i++){
//         let curSum=0;
//         let size = winSize;
//         let j=i;
//         while(size>0){
//             curSum+=arr[j++];
//             size--;
//         }
//         ans.push(curSum);
//     }
//     return ans;
// }

// let arr=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];

// console.log(slidingWindow(arr,2));

function slidingWindow(arr, winSize) {   // 

    let currSum = 0;
    let ans = [];
    for (let i = 0; i < winSize; i++) {
        currSum += arr[i];
    }
    ans.push(currSum);

    for (let i = winSize; i < arr.length ;i++){
        currSum= currSum-arr[i-winSize]+arr[i]; // arr[i-winSize]-> because we have to remove first before from sliding window.
        ans.push(currSum);
    }

    return ans;
}

let arr=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];
console.log(slidingWindow(arr,2));