#pragma once

class CLogicPlayerProxy : public CLogicalEntity /*0x0*/  // sizeof 0x518, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CEntityIOOutput m_PlayerHasAmmo; // offset 0x4A8, size 0x18, align 255
    CEntityIOOutput m_PlayerHasNoAmmo; // offset 0x4C0, size 0x18, align 255
    CEntityIOOutput m_PlayerDied; // offset 0x4D8, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // offset 0x4F0, size 0x20, align 8
    CHandle< CBaseEntity > m_hPlayer; // offset 0x510, size 0x4, align 4
    char _pad_0514[0x4]; // offset 0x514
};
