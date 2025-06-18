function pigIt(str){
  //split into array with each word
  str = str.split(" ");
  let newString = ""
  for(let i = 0; i < str.length; i++){
    let word = str[i];
    // check for special characters
    if(!/[!?{}()]/.test(word[0])) {
      //move first letter to end and add ay
      let letter = word[0];
      word += letter + "ay";
      word = word.replace(word[0],"");
    }
    // checks if last word and adds space accordingly
    if (i === str.length -1){
      newString += word;
    }else{
      newString += word + " ";
    }
  }
  // returns pig latin string
  return newString;
}