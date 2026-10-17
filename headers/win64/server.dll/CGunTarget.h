#pragma once

class CGunTarget : public CBaseToggle /*0x0*/  // sizeof 0x900, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    float32 m_flSpeed; // offset 0x8D8, size 0x4, align 4
    bool m_on; // offset 0x8DC, size 0x1, align 1
    char _pad_08DD[0x3]; // offset 0x8DD
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0x8E0, size 0x4, align 4
    char _pad_08E4[0x4]; // offset 0x8E4
    CEntityIOOutput m_OnDeath; // offset 0x8E8, size 0x18, align 255
};
