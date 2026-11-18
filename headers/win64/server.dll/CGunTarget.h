#pragma once

class CGunTarget : public CBaseToggle /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x938]; // offset 0x0
    float32 m_flSpeed; // offset 0x938, size 0x4, align 4
    bool m_on; // offset 0x93C, size 0x1, align 1
    char _pad_093D[0x3]; // offset 0x93D
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0x940, size 0x4, align 4
    char _pad_0944[0x4]; // offset 0x944
    CEntityIOOutput m_OnDeath; // offset 0x948, size 0x18, align 255
};
