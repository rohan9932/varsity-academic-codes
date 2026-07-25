// ---------- hoisting -------------
// var x 

// var x = null;
// console.log(typeof x);

// let x = 10;

// let firstName = "John";
// let age = 20;

// console.log("Firstname is: " + firstName, "Age is: " + age);

// //template literal / template string / string template
// console.log(`FirstName is: ${firstName}, Age is ${age}`);


// // ------------- string comparison -----------
// let x = 10;
// let y = "10";

// console.log(x === y);
// console.log(x !== y);

// const add = (x, y) => x + y;

// console.log(add(2, 6));


// // -------------- Objects -------- /
// let person = {
//   firstName: "User 1",
//   age: 20,
//   height: "5'6"
// };

// // let person2 = person; // both refer to the same obj

// let person2 = { ...person }; // spread operator

// person.firstName = "John Doe"

// console.log(person);
// console.log(person2);


// scopes -> global, function and block
// var only works on global and function scope. no block scope


// // --------------- Callback Func ------------------ /
// const myFunc = (func) => {
//   console.log("This is My Func.");
//   func(); //callback function -> as func being indirectly called
// };

// const anotherFunc = () => {
//   console.log("This is another function");
// };

// myFunc(anotherFunc);

// // ----------------------- event loop -------------- 

// setTimeout(() => {
//   console.log("Hello after 2 seconds");
// }, 2000);


// let counter = 0;
// const myFunc = () => {
//   counter += 1;
//   console.log(`Counter: ${counter}`);
// };

// setInterval(myFunc, 1000);


// const fetchUser = (username, callback) => {
//   setTimeout(callback, 2000, { username: username, age: 20, address: "Dhaka" }); // setTimeout calls callback func after 2 seconds and calls it
// };

// const myCallBack = (userDetails) => {
//   console.log(userDetails);
// };

// fetchUser("user1", myCallBack);


let promise = new Promise((resolve, reject) => {
  // resolve("The promise has been resolved.");
  reject("The promise has been rejected");
});

console.log(promise);

promise.then((value) => console.log(value))
  .catch((err) => console.log(err));