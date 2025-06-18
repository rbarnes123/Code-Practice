#include <string>

// seaches for correct closing character 
bool find_close(const std::string &braces, int start_index, bool right, char find){
  // based on right flag, sets loop
  if(right == true){
    for(unsigned int i = start_index + 1; i < braces.length(); i += 2){
      if(braces[i] == find){
        return true;
      }
    }
    //returns false if one isn't found
    return false;
  }else{
    // goes left to find ([{ in the right position
    for(int i = start_index - 1; i >= 0; i -= 2){
      if(i <= -1){return false;}
      if(braces[i]== find){
        return true;
      }
    }
    //returns false if one isn't found
    return false;
  }
}

bool valid_braces(const std::string &braces) 
{
  // for each ({[ check if a matching ]}) exists at odd intervals to the right until length
  // for each )}] check if a matching ({[ exists at odd intervals to the left until index 0
  bool valid = true;
  for (int i = 0; i < int(braces.length()); i++){
    if (braces[i] == '(') {
      valid = find_close(braces,i,true,')');
    }
    else if(braces[i] == '['){
      valid = find_close(braces,i,true,']');
    }
    else if(braces[i] == '{'){
      valid = find_close(braces,i,true,'}');
    }
    else if(braces[i] == ')'){
      valid = find_close(braces,i,false,'(');
    }
    else if(braces[i] == ']'){
      valid = find_close(braces,i,false,'[');
    }
    else if(braces[i] == '}'){
      valid = find_close(braces,i,false,'{');
    }
    // invalid character returns false
    else{return false;}
    // returns false if invalid pair is found
    if(valid == false){return false;}
  }
  // returns true if no invalid pair is found
  return true;
}