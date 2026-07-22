#pragma once

class CCitadelPassthroughFakeWall : public C_BaseModelEntity /*0x0*/  // sizeof 0x9F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    bool m_bAllowAnyone; // offset 0x9A8, size 0x1, align 1
    bool m_bAllowTinyCharacters; // offset 0x9A9, size 0x1, align 1
    char _pad_09AA[0x2]; // offset 0x9AA
    float32 m_flTriggerDistanceMeters; // offset 0x9AC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTrigger; // offset 0x9B0, size 0x4, align 4
    char _pad_09B4[0x4]; // offset 0x9B4
    CEntityIOOutput m_eventOnOpen; // offset 0x9B8, size 0x18, align 255
    CEntityIOOutput m_eventOnClose; // offset 0x9D0, size 0x18, align 255
    char _pad_09E8[0x8]; // offset 0x9E8
};
