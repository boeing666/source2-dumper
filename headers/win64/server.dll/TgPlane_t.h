#pragma once

struct TgPlane_t  // sizeof 0x24, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    float32 m_flPlaneOffset; // offset 0x0, size 0x4, align 4
    VectorWS m_vPointOnPlane; // offset 0x4, size 0xC, align 4
    Vector m_vPlaneNorm; // offset 0x10, size 0xC, align 4
    float32 m_flPlaneDist; // offset 0x1C, size 0x4, align 4
    bool m_bApplyToNpcCurrentPos; // offset 0x20, size 0x1, align 1
    bool m_bIsThreatPlane; // offset 0x21, size 0x1, align 1
    bool m_bIsOptional; // offset 0x22, size 0x1, align 1
    char _pad_0023[0x1]; // offset 0x23
};
