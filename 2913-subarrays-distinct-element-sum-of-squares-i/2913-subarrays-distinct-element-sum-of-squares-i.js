/**
 * @param {number[]} nums
 * @return {number}
 */
var sumCounts = function(nums) {
    let i=0,j=0;
    let sum=0;
    while(j<nums.length){
        let s=new Set(nums.slice(i,j+1));
        sum+=s.size*s.size;
        if(j==nums.length-1){
            i++;
            j=i;
            continue;
        }
        j++;
    }
    return sum;
};