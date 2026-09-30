#pragma once

class C_CitadelPassthroughFakeWall : public C_BaseModelEntity /*0x0*/  // sizeof 0xBF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    bool m_bAllowAnyone; // offset 0xBB0, size 0x1, align 1
    bool m_bAllowTinyCharacters; // offset 0xBB1, size 0x1, align 1
    char _pad_0BB2[0x2]; // offset 0xBB2
    float32 m_flTriggerDistanceMeters; // offset 0xBB4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTrigger; // offset 0xBB8, size 0x4, align 4
    char _pad_0BBC[0x4]; // offset 0xBBC
    CEntityIOOutput m_eventOnOpen; // offset 0xBC0, size 0x18, align 255
    CEntityIOOutput m_eventOnClose; // offset 0xBD8, size 0x18, align 255
    char _pad_0BF0[0x8]; // offset 0xBF0
};
