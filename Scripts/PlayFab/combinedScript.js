
    

function createGameSession(args, context) {
    let titleData = server.GetTitleData({ Keys: ["ActiveGameSessions"] });
    let activeSessions = JSON.parse(titleData.Data.ActiveGameSessions || "[]");

    let newSession = {
        "SessionId" : args.SessionId,
        "PlayerIDs" : args.PlayerIDs,
        "GameState" : "PreInitializeSession",
        "GameBoardMap" : args.GameBoardMap,
    };

    activeSessions.push(newSession);

    server.SetTitleData({
        Key: "ActiveGameSessions",
        Value: JSON.stringify(activeSessions)
    });

    return { success: true, message: "Game session created successfully." };
}
    

function updateGameSession(args, context) {
    let titleData = server.GetTitleData({ Keys: "ActiveGameSessions" });
    let activeSessions = JSON.parse(titleData.Data.ActiveGameSessions || "[]");

    for (let i = 0; i < activeSessions.length; ++i) {
        if (activeSessions[i].SessionId === args.SessionId) {
            activeSessions[i].GameState = args.GameState;
            break;
        }
    }

    server.SetTitleData({
        Key: "ActiveGameSessions",
        Value: JSON.stringify(activeSessions),
    });

    return { success: true, message: `Session: ${args.SessionId} Game State has been updated in ActiveGameSessions Title Data`};
}
    

function closeGameSession(args, context) {
    let titleData = server.GetTitleData({ Keys: ["ActiveGameSessions"]  });
    let activeSessions = JSON.parse(titleData.Data.ActiveGameSessions || "[]");

    activeSessions = activeSessions.filter(session => session.SessionId !== args.SessionId);

    server.SetTitleData({
        Key: "ActiveGameSessions",
        Value: JSON.stringify(activeSessions)
    });

    return { success: true, message: "Game session cleared from ActiveGameSessions in TitleData." };
}

    handlers.createGameSession = createGameSession;
    handlers.updateGameSession = updateGameSession;
    handlers.closeGameSession = closeGameSession;
