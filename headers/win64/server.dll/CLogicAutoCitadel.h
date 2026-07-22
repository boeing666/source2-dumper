#pragma once

class CLogicAutoCitadel : public CBaseEntity /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CEntityIOOutput m_OnWaitingForPlayersToJoin; // offset 0x4A0, size 0x18, align 255
    CEntityIOOutput m_OnPreGameWait; // offset 0x4B8, size 0x18, align 255
    CEntityIOOutput m_OnGameInProgress; // offset 0x4D0, size 0x18, align 255
    char _pad_04E8[0x8]; // offset 0x4E8
};
