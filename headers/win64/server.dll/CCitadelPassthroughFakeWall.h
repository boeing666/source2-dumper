#pragma once

class CCitadelPassthroughFakeWall : public CBaseModelEntity /*0x0*/  // sizeof 0x8C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    bool m_bAllowAnyone; // offset 0x878, size 0x1, align 1
    bool m_bAllowTinyCharacters; // offset 0x879, size 0x1, align 1
    char _pad_087A[0x2]; // offset 0x87A
    float32 m_flTriggerDistanceMeters; // offset 0x87C, size 0x4, align 4
    CHandle< CBaseEntity > m_hTrigger; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x4]; // offset 0x884
    CEntityIOOutput m_eventOnOpen; // offset 0x888, size 0x18, align 255
    CEntityIOOutput m_eventOnClose; // offset 0x8A0, size 0x18, align 255
    char _pad_08B8[0x8]; // offset 0x8B8
};
