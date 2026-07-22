#pragma once

class CGunTarget : public CBaseToggle /*0x0*/  // sizeof 0xAF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAD0]; // offset 0x0
    float32 m_flSpeed; // offset 0xAD0, size 0x4, align 4
    bool m_on; // offset 0xAD4, size 0x1, align 1
    char _pad_0AD5[0x3]; // offset 0xAD5
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0xAD8, size 0x4, align 4
    char _pad_0ADC[0x4]; // offset 0xADC
    CEntityIOOutput m_OnDeath; // offset 0xAE0, size 0x18, align 255
};
