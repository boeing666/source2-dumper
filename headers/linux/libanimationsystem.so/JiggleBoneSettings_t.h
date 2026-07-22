#pragma once

struct JiggleBoneSettings_t  // sizeof 0x2C, align 0x4 [trivial_ctor trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    int32 m_nBoneIndex; // offset 0x0, size 0x4, align 4
    float32 m_flSpringStrength; // offset 0x4, size 0x4, align 4
    float32 m_flMaxTimeStep; // offset 0x8, size 0x4, align 4
    float32 m_flDamping; // offset 0xC, size 0x4, align 4
    Vector m_vBoundsMaxLS; // offset 0x10, size 0xC, align 4
    Vector m_vBoundsMinLS; // offset 0x1C, size 0xC, align 4
    JiggleBoneSimSpace m_eSimSpace; // offset 0x28, size 0x4, align 4
};
