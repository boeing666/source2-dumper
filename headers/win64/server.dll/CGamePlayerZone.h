#pragma once

class CGamePlayerZone : public CRuleBrushEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CEntityIOOutput m_OnPlayerInZone; // offset 0x788, size 0x18, align 255
    CEntityIOOutput m_OnPlayerOutZone; // offset 0x7A0, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_PlayersInCount; // offset 0x7B8, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_PlayersOutCount; // offset 0x7D8, size 0x20, align 8
};
