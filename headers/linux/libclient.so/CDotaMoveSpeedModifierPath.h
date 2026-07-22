#pragma once

class CDotaMoveSpeedModifierPath : public C_BaseEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    float32 m_flPathLength; // offset 0x76C, size 0x4, align 4
    CUtlVector< DotaModifierPathNode_t > m_vecNodes; // offset 0x770, size 0x18, align 8
    char _pad_0788[0x18]; // offset 0x788
    CHandle< C_BaseEntity > m_hTrigger; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
};
