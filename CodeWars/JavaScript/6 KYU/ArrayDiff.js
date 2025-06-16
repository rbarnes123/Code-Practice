function arrayDiff(a, b) {
  return a.filter(function(item) {
    return !b.includes(item);
  });
}