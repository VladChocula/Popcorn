
const MAX_PLAYERS_PER_SESSION = 10;

handlers.createGameSession = function (args, context) {
    let newSession = {
        SessionId: generateUniqueSessionID(),
        Players: [],
        SessionData: {}
    };

    serverSetTitleInternalData({
        Key: newSession.SessionId,
        Value: JSON.stringify(newSession)
    });

    return { success: true, sessionId: newSession.SessionId };
}

// Player Joining Game Session
handlers.playerJoinsGameSession = function (args, context)  {
    let sessionId = args.sessionId;
    let playerId = currentPlayerId;

    let sessionData = JSON.parse(server.GetTitleInternalData({ Keys: [sessionId]} ).Data[sessionId]);

    if (sessionData.Players.length >= MAX_PLAYERS_PER_SESSION) {
        throw `${sessionId} IS FULL`;
    }

    sessionData.Players.push(playerId);
    server.SetTitleInternalData({
        Key: sessionId,
        Value: JSON.stringify(sessionData)
    });

    return { success: true, sessionId: sessionId };
}

function generateUniqueSessionId() {
    return "Session_" +new Date().getTime();
}