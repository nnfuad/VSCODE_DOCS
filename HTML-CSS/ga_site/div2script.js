console.log("Hello Friend...I am alone again...");
name = "NNF";
console.log(name);
x= null;
console.log(x+1);
console.log(undefined+3);
console.log(3>4);
console.log(null<3);
console.log(undefined>3);
console.log(undefined<0);
console.log(null>undefined);
console.log(null<=undefined);
console.log(undefined==null);
console.log(null==undefined);
x= 34;
console.log(x);
let Fullname="NNF";
// console.log(BigInt(Fullname));
Fullname = 43;
console.log(BigInt(Fullname));
// let Fullname = null; 
const student = {
    name: "Fuad",
    age: 20,
    salary: 0,
    cgpa: 3.00,

};
console.log(student);
console.log(typeof(student));
console.log(student["salary"]);
student.age++;
console.log("Fuad is "+student.age);

// do{
//  y = prompt("Whats your age?");
//  y>=18 ? console.log("okay Ill let you in") : console.log("Restricted");
//  z=y;
// }
// while(y<18);

// do{
    
//     y = prompt(`Bro are you sure u are ${z} years old?`);
//     y=="YES"||y=="yes"||y=="Yes"||y=="yeS"||y=="Y"||y=="y" ? console.log("okay Ill let you in") : console.log("Yoy little pucker, whyd you lie???");
   
//    }
//    while(!( y=="YES"||y=="yes"||y=="Yes"||y=="yeS"||y=="Y"||y=="y"));

str = "NNF";
for (let i of str){
    console.log(i);
}
for (let key in student){
    console.log("Key= ",key, "Value= ", student[key]);
}
let s= "Hii i am nnf";

//Template Literals
let sentence = `This is a template literal. Therefore ${student.name} is ${student.salary} salaried, unemployed`;
m=s.trim();
n= s.slice(0,3);
console.log(m);
x = s.replace("i", "fku");
console.log(x);
x = s.replaceAll("i", "fku");
console.log(x);
console.log(x.charAt(2));

y = prompt("Enter your Full name (WITHOUT SPACES)");
x= y.slice();
console.log("Your full name is "+ x);
lowerName = x.toLowerCase()
username = lowerName.concat(lowerName.length);
console.log("Your username is @"+ username);




 