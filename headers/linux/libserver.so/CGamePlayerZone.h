#pragma once

class CGamePlayerZone : public CRuleBrushEntity /*0x0*/  // sizeof 0xBA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB38]; // offset 0x0
    CEntityIOOutput m_OnPlayerInZone; // offset 0xB38, size 0x18, align 255
    CEntityIOOutput m_OnPlayerOutZone; // offset 0xB50, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_PlayersInCount; // offset 0xB68, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_PlayersOutCount; // offset 0xB88, size 0x20, align 8
};
