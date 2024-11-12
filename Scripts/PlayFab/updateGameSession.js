

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