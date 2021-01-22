// hfrankly
(function grace() {
    const fs = require('fs');
    fs.writeFile('Grace_kid.js', `// hfrankly\n(${grace.toString()})();`, () => {});
})();