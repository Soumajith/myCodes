//1. Ways to print in Javascript
//console.log("Hello World")
//alert("check");
//document.write("this is document write")

//2. Javascript console API
// console.log("Hello World", 6 + 99, "THis is a test");
// console.error("This is error");
// console.warn("This is warning");

//3. Javascript Variables
var num1 = 67;
var num2 = 89;
// console.log(num1 + num2);

//4. Data types in JS
var name = "Soumajith";
var str1 = 'Das'; //string
var num3 = 89.09; //decimal
var bool1 = true; ///boolean

//5. Objects
var marks = {
    ravi: 09,
    suresh: 90,
    soumo: 89
}

// console.log(marks);

// var und; //undefined
// console.log(und);

// var n = null; 
// console.log(n);

//6. Arrays
// var arr = [3, 5, 7, 9, 0];
// var arr2 = [7, 8, "nstr", 9, 0];
// // for(var i = 0; i< arr.length; i++){
// //     console.log(arr[i]);
// // }
// arr.forEach(function (ele) {
//     console.log(ele);
// })

//7. Functions
// function avg(a, b) {
//     return (a + b) / 2;
// }
// console.log(avg(7, 5));


//8. new datatype
let j = 0;
const fix = 89;

//9. Array methods
// let myArr = ["Fan", "Camera", 43, null, true];
// console.log(myArr);

// myArr.pop(); //pops the last the last one
// console.log(myArr);
// myArr.push("Soumo");//adds at end
// console.log(myArr);
// myArr.shift();//removes from the front
// console.log(myArr);
// myArr.unshift("noice"); // adds at front
// console.log(myArr.unshift(9)); //prints the size of the array after the unshift

// myArr.toString();
// console.log(myArr);

//10. String methods in JS
let myString = "A good guy is a guy";
// console.log(myString.length);
// console.log(myString.indexOf("guy"));
// console.log(myString.lastIndexOf("guy"));
// console.log(myString.slice(2,6));
// let newString = myString.replace("guy","bad");

// console.log(myString, newString);

//11. dates in js
let newDate = new Date();
// console.log(newDate);
// console.log(newDate.getDate());
// console.log(newDate.getTime());
// console.log(newDate.getFullYear());
// console.log(newDate.getDay());

//12.DOM manipulation
let elem = document.getElementsByClassName("container");
// console.log(elem);
elem[1].style.background = "yellow";
// elem[0].classList.add("bgPrimary");
// elem[0].classList.add("text-success");
// elem[0].classList.remove("text-success");
// let tn = document.getElementsByTagName('div');
// console.log(tn);

// createdElement1 = document.createElement('p');
// createdElement1.innerText = "This is normal thing"
// tn[0].appendChild(createdElement1);
// createdElement2 = document.createElement('p');
// createdElement2.innerText = "This is new line";
// tn[0].replaceChild(createdElement2, createdElement1);

// sel = document.querySelector('.container');
// console.log(sel);
// sel = document.querySelectorAll('.container');
// console.log(sel);

//13. JS events
function clicked(){
    console.log("The button was clicked");
}

window.onload = function(){
    console.log('the window was loaded')
} 

// firstContainer.addEventListener('click', function(){
//     console.log("Clicked on container");
// })

// firstContainer.addEventListener('mouseover', function(){
//     console.log("mouse on the div")
// })


// firstContainer.addEventListener('mouseout', function(){
//     console.log("mouse out the div")
// })

firstContainer.addEventListener('mouseup', function(){
    console.log("mouse on the container");
})

firstContainer.addEventListener('mousedown', function(){
    console.log("mouse down the container")
})
