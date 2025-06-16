function domainName(url){
  // regex to get everything before and after the domain
  const regex = new RegExp(/https?:\/\/|www\.|\..*$|/g);
  return url.replaceAll(regex,"");
  
}