function narcissistic(value) {
  // gets each character from value
  let valueArr = value.toString().split("");  
  let sum = 0;
  var temp
  // iterates through array and sums each int ^ number of digits in value
  for(let i = 0; i < valueArr.length; i++){
    temp = parseInt(valueArr[i],10);
    sum += Math.pow(temp,valueArr.length);
  }
  // compares sum to value (checks if Narcissistic)
  if (sum == value){
    return true;
  }
  return false;
}