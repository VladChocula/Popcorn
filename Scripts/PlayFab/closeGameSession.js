

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