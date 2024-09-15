/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    if(matrix.length === 0 || matrix[0].length === 0) {
        return false;
    }

    let row = matrix.length;
    let column = matrix[0].length;

    let start = 0;
    let end = row * column - 1;

    while (start <= end) {
        let mid = Math.floor(start + (end - start) / 2);
        let numRow = Math.floor(mid / column);
        let numColumn = mid % column;

        if (matrix[numRow][numColumn] === target) {
            return true;
        } else if (matrix[numRow][numColumn] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return false;
};
