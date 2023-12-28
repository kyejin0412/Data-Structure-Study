// 프로그래머스 배열만들기1
// function solution(n, k) {
//   let answer = [];
//   let i = k;
//   while (i <= n) {
//     answer.push(i);
//     i += k;
//   }
//   return answer;
// }

// console.log(solution(10, 3));
// console.log(solution(15, 5));

// 배열의 길이에 따라 다른 연산하기 + 화살표 함수 활용
// 세 함수 모두 같은 결과를 냄.
function solution1(arr, n) {
  return arr.map((num, idx) => (arr.length % 2 !== idx % 2 ? num + n : num));
}

const solution2 = (arr, n) => {
  return arr.map((num, idx) => (arr.length % 2 !== idx % 2 ? num + n : num));
};

const solution3 = (arr, n) => arr.map((num, idx) => (arr.length % 2 !== idx % 2 ? num + n : num));

console.log(solution1([49, 12, 100, 276, 33], 27));
console.log(solution2([49, 12, 100, 276, 33], 27));
console.log(solution3([49, 12, 100, 276, 33], 27));
