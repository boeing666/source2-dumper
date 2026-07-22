#pragma once

class CLogicPlayerProxy : public CLogicalEntity /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEntityIOOutput m_PlayerHasAmmo; // offset 0x778, size 0x18, align 255
    CEntityIOOutput m_PlayerHasNoAmmo; // offset 0x790, size 0x18, align 255
    CEntityIOOutput m_PlayerDied; // offset 0x7A8, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // offset 0x7C0, size 0x20, align 8
    CHandle< CBaseEntity > m_hPlayer; // offset 0x7E0, size 0x4, align 4
    char _pad_07E4[0x4]; // offset 0x7E4
};
