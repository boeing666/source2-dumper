#pragma once

class CDotaMoveSpeedModifierPath : public C_BaseEntity /*0x0*/  // sizeof 0x630, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    float32 m_flPathLength; // offset 0x5F0, size 0x4, align 4
    char _pad_05F4[0x4]; // offset 0x5F4
    CUtlVector< DotaModifierPathNode_t > m_vecNodes; // offset 0x5F8, size 0x18, align 8
    char _pad_0610[0x18]; // offset 0x610
    CHandle< C_BaseEntity > m_hTrigger; // offset 0x628, size 0x4, align 4
    char _pad_062C[0x4]; // offset 0x62C
};
