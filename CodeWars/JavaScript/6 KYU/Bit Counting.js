function countBits(n) {
  let oneCount = 0;
  // holds binary representation of n
  let binaryN = n.toString(2);
  for(let i = 0; i < binaryN.length; i++){
    if(binaryN[i] == 1){
      oneCount += 1;
    }
  }
    return oneCount;
}