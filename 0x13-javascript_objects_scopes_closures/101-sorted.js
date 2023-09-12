#!/usr/bin/node
const dict = require('./101-data.js').dict;

const occurences = {};

for (const userId in dict) { // looping through the object key
  const count = dict[userId]; // assigns the value to a variable
  if (count in occurences) { // if key exists
    occurences[count].push(userId); 
  } else {
    occurences[count] = [userId]; 
  }
}
console.log(occurences);
