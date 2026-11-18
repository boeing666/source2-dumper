#pragma once

struct ModelMeshDNARig_t  // sizeof 0xC, align 0x4 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
    int32 m_nRig; // offset 0x0, size 0x4, align 4
    int32 m_nBlock; // offset 0x4, size 0x4, align 4
    bool m_bBlendShapes; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
};
