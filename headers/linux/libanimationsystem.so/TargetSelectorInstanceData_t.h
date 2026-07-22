#pragma once

struct TargetSelectorInstanceData_t  // sizeof 0x30, align 0xFF [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    CAnimNetVar< int32 > m_currentIndex; // offset 0x0, size 0xC, align 4
    char _pad_000C[0x10]; // offset 0xC
    CAnimNetVar< Vector > m_vMSRootMotionAnlyzerTarget; // offset 0x1C, size 0x14, align 4
};
