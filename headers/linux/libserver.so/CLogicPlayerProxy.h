#pragma once

class CLogicPlayerProxy : public CLogicalEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CEntityIOOutput m_PlayerHasAmmo; // offset 0x788, size 0x18, align 255
    CEntityIOOutput m_PlayerHasNoAmmo; // offset 0x7A0, size 0x18, align 255
    CEntityIOOutput m_PlayerDied; // offset 0x7B8, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // offset 0x7D0, size 0x20, align 8
    CHandle< CBaseEntity > m_hPlayer; // offset 0x7F0, size 0x4, align 4
    char _pad_07F4[0x4]; // offset 0x7F4
};
