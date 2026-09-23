#pragma once

class CGunTarget : public CBaseToggle /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D0]; // offset 0x0
    float32 m_flSpeed; // offset 0x8D0, size 0x4, align 4
    bool m_on; // offset 0x8D4, size 0x1, align 1
    char _pad_08D5[0x3]; // offset 0x8D5
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0x8D8, size 0x4, align 4
    char _pad_08DC[0x4]; // offset 0x8DC
    CEntityIOOutput m_OnDeath; // offset 0x8E0, size 0x18, align 255
};
