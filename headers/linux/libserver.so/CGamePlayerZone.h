#pragma once

class CGamePlayerZone : public CRuleBrushEntity /*0x0*/  // sizeof 0xAC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CEntityIOOutput m_OnPlayerInZone; // offset 0xA58, size 0x18, align 255
    CEntityIOOutput m_OnPlayerOutZone; // offset 0xA70, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_PlayersInCount; // offset 0xA88, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_PlayersOutCount; // offset 0xAA8, size 0x20, align 8
};
