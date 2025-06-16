function findShort(s){
  // splits words individually into an array
  s = s.split(" ");
  let smallest = s[0].length;
  // compares lengths of other words to the current smallest
  for( let i = 0; i < s.length; i++){
      if(s[i].length <= smallest){
        // updates if smaller word is found
        smallest = s[i].length;
      }
  }
  return smallest;
}