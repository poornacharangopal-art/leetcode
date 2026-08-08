/**
 * @param {number} n
 * @return {number[]}
 */
var lexicalOrder = function(n) {
    var nums=new Array();
    for(var i=1;i<=n;i++){
        nums.push(i);
    }
    nums.sort();
    return nums;
};