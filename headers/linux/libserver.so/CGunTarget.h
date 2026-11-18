#pragma once

class CGunTarget : public CBaseToggle /*0x0*/  // sizeof 0xC40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC18]; // offset 0x0
    float32 m_flSpeed; // offset 0xC18, size 0x4, align 4
    bool m_on; // offset 0xC1C, size 0x1, align 1
    char _pad_0C1D[0x3]; // offset 0xC1D
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0xC20, size 0x4, align 4
    char _pad_0C24[0x4]; // offset 0xC24
    CEntityIOOutput m_OnDeath; // offset 0xC28, size 0x18, align 255
};
