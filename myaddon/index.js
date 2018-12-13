var addon = require("bindings")("sdkaddon");

console.log("1");
try {
  console.log("test ", addon.test());
} catch (error) {
  console.log(error);
}
console.log("2");
