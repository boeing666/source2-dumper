#pragma once

class CLogicPlayerProxy : public CLogicalEntity /*0x0*/  // sizeof 0x510, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CEntityIOOutput m_PlayerHasAmmo; // offset 0x4A0, size 0x18, align 255
    CEntityIOOutput m_PlayerHasNoAmmo; // offset 0x4B8, size 0x18, align 255
    CEntityIOOutput m_PlayerDied; // offset 0x4D0, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // offset 0x4E8, size 0x20, align 8
    CHandle< CBaseEntity > m_hPlayer; // offset 0x508, size 0x4, align 4
    char _pad_050C[0x4]; // offset 0x50C
};
