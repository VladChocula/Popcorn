

let createGameSession = require('./createGameSession.js').createGameSession;
let updateGameSession = require('./updateGameSession.js').updateGameSession;
let closeGameSession = require('./closeGameSession.js').closeGameSession;

handlers.createGameSession = createGameSession;
handlers.updateGameSession = updateGameSession;
handlers.closeGameSession = closeGameSession;