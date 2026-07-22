#pragma once

class CGunTarget : public CBaseToggle /*0x0*/  // sizeof 0xAF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAC8]; // offset 0x0
    float32 m_flSpeed; // offset 0xAC8, size 0x4, align 4
    bool m_on; // offset 0xACC, size 0x1, align 1
    char _pad_0ACD[0x3]; // offset 0xACD
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0xAD0, size 0x4, align 4
    char _pad_0AD4[0x4]; // offset 0xAD4
    CEntityIOOutput m_OnDeath; // offset 0xAD8, size 0x18, align 255
};
