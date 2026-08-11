#pragma once

class CCitadelPassthroughFakeWall : public CBaseModelEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    bool m_bAllowAnyone; // offset 0x780, size 0x1, align 1
    bool m_bAllowTinyCharacters; // offset 0x781, size 0x1, align 1
    char _pad_0782[0x2]; // offset 0x782
    float32 m_flTriggerDistanceMeters; // offset 0x784, size 0x4, align 4
    CHandle< CBaseEntity > m_hTrigger; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
    CEntityIOOutput m_eventOnOpen; // offset 0x790, size 0x18, align 255
    CEntityIOOutput m_eventOnClose; // offset 0x7A8, size 0x18, align 255
    char _pad_07C0[0x8]; // offset 0x7C0
};
