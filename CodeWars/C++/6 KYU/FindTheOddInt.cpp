#include <vector>
#include<map>

int findOdd(const std::vector<int>& numbers){
  // map links number to its count in the vector
  std::map<int,int> counts;
  for(unsigned int i = 0; i< numbers.size(); i++){
    auto iterator = counts.find(numbers[i]);
    // if number not found, initialize its count with 1 in the map
    if(iterator == counts.end()){
      counts.insert({numbers[i],1});
    // if found, increment count
    }else{
      counts[numbers[i]]++;
    }
  }
  // once map is made, check each map for an odd number
  for(auto iterator = counts.begin(); iterator != counts.end(); ++iterator){
    if(iterator->second % 2 == 1){return iterator->first;}
  }
  // should never reach here, but just in case there is no odd number
  return -1;
}