#pragma once

enum ECSUsrMsg_DisconnectToLobby_Action : uint32_t  // sizeof 0x4
{
    k_ECSUsrMsg_DisconnectToLobby_Action_Default = 0,
    k_ECSUsrMsg_DisconnectToLobby_Action_GoQueue = 1,
};
