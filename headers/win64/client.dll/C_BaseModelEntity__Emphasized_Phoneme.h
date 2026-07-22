#pragma once

class C_BaseModelEntity::Emphasized_Phoneme  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_sClassName; // offset 0x0, size 0x8, align 8
    char _pad_0008[0x10]; // offset 0x8
    float32 m_flAmount; // offset 0x18, size 0x4, align 4
    bool m_bRequired; // offset 0x1C, size 0x1, align 1
    bool m_bBasechecked; // offset 0x1D, size 0x1, align 1
    bool m_bValid; // offset 0x1E, size 0x1, align 1
    char _pad_001F[0x1]; // offset 0x1F
};
