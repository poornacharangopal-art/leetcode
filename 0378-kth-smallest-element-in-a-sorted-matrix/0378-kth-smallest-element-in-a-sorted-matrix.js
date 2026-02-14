/**
 * @param {number[][]} matrix
 * @param {number} k
 * @return {number}
 */
var kthSmallest = function(matrix, k) {
      matrix=matrix.flat();
        for(var i=1;i<matrix.length;i++){
            var min=matrix[i];
            var j=i-1;
            while(j>=0&&matrix[j]>min){
                matrix[j+1]=matrix[j];
                   j--;
            }
            matrix[j+1]=min;
             
        }
         return matrix[k-1];
    
};