#pragma once

class CLogicPlayerProxyBase : public CLogicalEntity /*0x0*/  // sizeof 0x520, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CEntityIOOutput m_PlayerHasAmmo; // offset 0x4B0, size 0x18, align 255
    CEntityIOOutput m_PlayerHasNoAmmo; // offset 0x4C8, size 0x18, align 255
    CEntityIOOutput m_PlayerDied; // offset 0x4E0, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // offset 0x4F8, size 0x20, align 8
    CHandle< CBaseEntity > m_hPlayer; // offset 0x518, size 0x4, align 4
    char _pad_051C[0x4]; // offset 0x51C
};
