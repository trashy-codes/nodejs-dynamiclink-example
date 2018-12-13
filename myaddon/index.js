var addon = require("bindings")("sdkaddon");

try {
  console.log("js " + addon.test());
} catch (error) {
  console.log("error", error);
}
console.log("js end");
