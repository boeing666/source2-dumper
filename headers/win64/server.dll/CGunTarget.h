#pragma once

class CGunTarget : public CBaseToggle /*0x0*/  // sizeof 0x818, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    float32 m_flSpeed; // offset 0x7F0, size 0x4, align 4
    bool m_on; // offset 0x7F4, size 0x1, align 1
    char _pad_07F5[0x3]; // offset 0x7F5
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0x7F8, size 0x4, align 4
    char _pad_07FC[0x4]; // offset 0x7FC
    CEntityIOOutput m_OnDeath; // offset 0x800, size 0x18, align 255
};
