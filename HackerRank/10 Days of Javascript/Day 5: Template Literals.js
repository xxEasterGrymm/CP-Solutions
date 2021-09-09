/*
 * Determine the original side lengths and return an array:
 * - The first element is the length of the shorter side
 * - The second element is the length of the longer side
 * 
 * Parameter(s):
 * literals: The tagged template literal's array of strings.
 * expressions: The tagged template literal's array of expression values (i.e., [area, perimeter]).
 */
function sides(literals, ...expressions) {
    var [A, P] = expressions;
    let constPart = Math.sqrt(P ** 2 - 16 * A) / 4;
    return [P / 4 - constPart, P / 4 + constPart];
}