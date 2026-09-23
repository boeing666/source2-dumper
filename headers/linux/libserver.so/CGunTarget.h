#pragma once

class CGunTarget : public CBaseToggle /*0x0*/  // sizeof 0xBD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBA8]; // offset 0x0
    float32 m_flSpeed; // offset 0xBA8, size 0x4, align 4
    bool m_on; // offset 0xBAC, size 0x1, align 1
    char _pad_0BAD[0x3]; // offset 0xBAD
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0xBB0, size 0x4, align 4
    char _pad_0BB4[0x4]; // offset 0xBB4
    CEntityIOOutput m_OnDeath; // offset 0xBB8, size 0x18, align 255
};
