// day1:- let and const:
// 🎆 link:https://www.hackerrank.com/challenges/js10-let-and-const/problem 🎆 
// var readlinem = require('readline')
// var v1 = readlinem.Interface(process.stdin , process.stdout)
const PI = Math.PI
// let r = readline()
let r;
const readline = require('readline').createInterface({input:process.stdin , output:process.stdout})
readline.question(' ' , r=>{
    let area = PI * r *r 
    let perimeter = 2*PI *r
    console.log(area);
    console.log(perimeter);
    readline.close()
})
// v1.question(r=>{

//     let area = PI * r *r 
//     let perimeter = 2*PI *r
//     console.log(area);
//     console.log(perimeter);
// })
// readLine()

