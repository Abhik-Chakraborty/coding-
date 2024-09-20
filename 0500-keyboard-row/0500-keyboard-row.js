/**
 * @param {string[]} words
 * @return {string[]}
 */

function canTypeWithOneRow(word, rowSet) {
        for(let char of word) {
            if(!rowSet.has(char)){
                return false;
            }
        }
        return true;
     };

var findWords = function(words) {
    
    const row1 = new Set ('qwertyuiopQWERTYUIOP');
    const row2 = new Set ('asdfghjklASDFGHJKL');
    const row3 = new Set ('zxcvbnmZXCVBNM');

    const result = [];



     //iterate...
    for (let word of words) {      
        if (canTypeWithOneRow(word, row1) || canTypeWithOneRow(word, row2) || canTypeWithOneRow(word, row3)) {
            result.push(word);
        }
    }


    return result;
};