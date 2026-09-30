#pragma once

class CGunTarget : public CBaseToggle /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    float32 m_flSpeed; // offset 0x8F8, size 0x4, align 4
    bool m_on; // offset 0x8FC, size 0x1, align 1
    char _pad_08FD[0x3]; // offset 0x8FD
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0x900, size 0x4, align 4
    char _pad_0904[0x4]; // offset 0x904
    CEntityIOOutput m_OnDeath; // offset 0x908, size 0x18, align 255
};
