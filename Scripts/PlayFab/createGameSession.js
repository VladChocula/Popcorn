

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