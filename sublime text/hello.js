let a=5;
let i=1;
for( i=1;i<a;i++){
    for(let j=1;j<i;j++){
        console.log("*")
    }
    console.log("\n")
}
for(let i=1;i<a;i++){
    for(let j=1;j<a-i;j++){
        console.log(" ")
    }
    for (let j = 1; j <  i; j++) {
      console.log("*");
    }
    console.log("\n");
}