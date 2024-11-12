const fs = require('fs');
const path = require('path');

const createGameSession = fs.readFileSync(path.join(__dirname, 'createGameSession.js'), 'utf-8');
const updateGameSession = fs.readFileSync(path.join(__dirname, 'updateGameSession.js'), 'utf-8');
const closeGameSession = fs.readFileSync(path.join(__dirname, 'closeGameSession.js'), 'utf-8');

const combinedScript = `
    ${createGameSession}
    ${updateGameSession}
    ${closeGameSession}

    handlers.createGameSession = createGameSession;
    handlers.updateGameSession = updateGameSession;
    handlers.closeGameSession = closeGameSession;
`;

fs.writeFileSync(path.join(__dirname, 'combinedScript.js'), combinedScript, 'utf-8');

console.log('Scripts combined successfully into combinedScript.js');