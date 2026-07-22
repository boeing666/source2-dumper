#pragma once

struct ModelBoneFlexDriver_t  // sizeof 0x28, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CUtlString m_boneName; // offset 0x0, size 0x8, align 8
    uint32 m_boneNameToken; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< ModelBoneFlexDriverControl_t > m_controls; // offset 0x10, size 0x18, align 8
};
