function findOutlier(integers){ 
  let even = [];
  let odd = [];
  // adds numbers to even and odd arrays, checks their length to find outlier
  for(let i = 0; i < integers.length; i++){
    // if odd add to odd
    if(integers[i] % 2 === 1 || integers[i] % 2 === -1){
      odd.push(integers[i]);
      
      // check length and return if outlier found
      if(odd.length >=2 && even.length === 1){
        return even[0];
      }else if(even.length >=2 && odd.length ==1){
        return odd[0];
      }
    }else{
      // if even add to even
      even.push(integers[i]);
      //check length and return if outlier found
      if(even.length >=2 && odd.length === 1){
        return odd[0];
      }else if(odd.length >=2 && even.length ==1){
        return even[0];
      }
    }
  }
}