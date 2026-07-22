#pragma once

struct fogplayerparams_t  // sizeof 0x40, align 0x8 [vtable trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CHandle< CFogController > m_hCtrl; // offset 0x8, size 0x4, align 4
    float32 m_flTransitionTime; // offset 0xC, size 0x4, align 4
    Color m_OldColor; // offset 0x10, size 0x4, align 1
    float32 m_flOldStart; // offset 0x14, size 0x4, align 4
    float32 m_flOldEnd; // offset 0x18, size 0x4, align 4
    float32 m_flOldMaxDensity; // offset 0x1C, size 0x4, align 4 | MNotSaved
    float32 m_flOldHDRColorScale; // offset 0x20, size 0x4, align 4 | MNotSaved
    float32 m_flOldFarZ; // offset 0x24, size 0x4, align 4 | MNotSaved
    Color m_NewColor; // offset 0x28, size 0x4, align 1
    float32 m_flNewStart; // offset 0x2C, size 0x4, align 4
    float32 m_flNewEnd; // offset 0x30, size 0x4, align 4
    float32 m_flNewMaxDensity; // offset 0x34, size 0x4, align 4 | MNotSaved
    float32 m_flNewHDRColorScale; // offset 0x38, size 0x4, align 4 | MNotSaved
    float32 m_flNewFarZ; // offset 0x3C, size 0x4, align 4 | MNotSaved
};
