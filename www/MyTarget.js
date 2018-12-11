function MyTarget() {
}

MyTarget.prototype.init = function(slotId) {
    cordova.exec(null, null, "MyTargetPlugin", "initMyTarget", [slotId]);
}

MyTarget.prototype.makeBanner = function(slotId, success, fail) {
    cordova.exec(success, fail, "MyTargetPlugin", "makeBanner", [slotId]);
}

MyTarget.prototype.removeBanner = function(success, fail) {
    cordova.exec(success, fail, "MyTargetPlugin", "removeBanner", []);
}

MyTarget.prototype.makeFullscreen = function(slotId, success, fail) {
    cordova.exec(success, fail, "MyTargetPlugin", "makeFullscreen", [slotId]);
}

module.exports = new MyTarget();
