#pragma once

class C_FoWRevealerEntity : public C_BaseEntity /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    uint32 m_unViewerTeam; // offset 0x76C, size 0x4, align 4
    int32 m_nVisionRange; // offset 0x770, size 0x4, align 4
    char _pad_0774[0x4]; // offset 0x774
};
