#pragma once

class CGunTarget : public CBaseToggle /*0x0*/  // sizeof 0x820, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x800]; // offset 0x0
    bool m_on; // offset 0x800, size 0x1, align 1
    char _pad_0801[0x3]; // offset 0x801
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0x804, size 0x4, align 4
    CEntityIOOutput m_OnDeath; // offset 0x808, size 0x18, align 255
};
