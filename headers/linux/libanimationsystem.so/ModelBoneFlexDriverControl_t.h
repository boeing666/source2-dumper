#pragma once

struct ModelBoneFlexDriverControl_t  // sizeof 0x20, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    ModelBoneFlexComponent_t m_nBoneComponent; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_flexController; // offset 0x8, size 0x8, align 8
    uint32 m_flexControllerToken; // offset 0x10, size 0x4, align 4
    float32 m_flMin; // offset 0x14, size 0x4, align 4
    float32 m_flMax; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
