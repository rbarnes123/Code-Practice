function digitalRoot(n) {
  n = n.toString();
  let sum = 0;
  // adds each character to sum
  for(let i = 0; i < n.length; i++){
    let x = parseInt(n[i]);
    sum += x;
  }
  // checks sum length
  let stringSum = sum.toString();
  if (stringSum.length > 1){
    sum = digitalRoot(sum);
  }
  return sum;
}