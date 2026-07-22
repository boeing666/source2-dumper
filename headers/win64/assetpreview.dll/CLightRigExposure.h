#pragma once

class CLightRigExposure  // sizeof 0xC, align 0x4 [trivial_dtor] (toolscene) {MGetKV3ClassDefaults}
{
public:
    bool m_bEnabled; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x3]; // offset 0x1
    float32 m_flMinEV; // offset 0x4, size 0x4, align 4
    float32 m_flMaxEV; // offset 0x8, size 0x4, align 4
};
