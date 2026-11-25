/**
 * @param {number} rowsCount
 * @param {number} colsCount
 * @return {Array<Array<number>>}
 */
Array.prototype.snail = function(rowsCount, colsCount) {
    let Arr=new Array();
    let i=0;
    if(this.length!=rowsCount*colsCount){
        return Arr;
    }
    while(i<rowsCount){
        let count=0;
        let a=new Array();
        while(count<colsCount){
            let j;
           if (count % 2 == 0) {
                j = count * rowsCount + i;
            } else {
                j = count * rowsCount + (rowsCount - 1 - i);
            }
            a.push(this[j]);
            count++;
        }
        Arr.push(a);
        i++;
    } 
    return Arr;
}

/**
 * const arr = [1,2,3,4];
 * arr.snail(1,4); // [[1,2,3,4]]
 */