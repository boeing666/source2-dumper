#pragma once

class CGamePlayerZone : public CRuleBrushEntity /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEntityIOOutput m_OnPlayerInZone; // offset 0x778, size 0x18, align 255
    CEntityIOOutput m_OnPlayerOutZone; // offset 0x790, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_PlayersInCount; // offset 0x7A8, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_PlayersOutCount; // offset 0x7C8, size 0x20, align 8
};
