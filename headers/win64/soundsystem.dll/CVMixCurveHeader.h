#pragma once

class CVMixCurveHeader  // sizeof 0x8, align 0x4 [trivial_ctor trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    uint32 m_nControlPointCount; // offset 0x0, size 0x4, align 4
    uint32 m_nControlPointStart; // offset 0x4, size 0x4, align 4
};
