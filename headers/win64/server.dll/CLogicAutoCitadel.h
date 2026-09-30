#pragma once

class CLogicAutoCitadel : public CBaseEntity /*0x0*/  // sizeof 0x500, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CEntityIOOutput m_OnWaitingForPlayersToJoin; // offset 0x4B0, size 0x18, align 255
    CEntityIOOutput m_OnPreGameWait; // offset 0x4C8, size 0x18, align 255
    CEntityIOOutput m_OnGameInProgress; // offset 0x4E0, size 0x18, align 255
    char _pad_04F8[0x8]; // offset 0x4F8
};
