#pragma once

class CovMatrix3  // sizeof 0x18, align 0x4 [trivial_ctor trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
public:
    Vector m_vDiag; // offset 0x0, size 0xC, align 4
    float32 m_flXY; // offset 0xC, size 0x4, align 4
    float32 m_flXZ; // offset 0x10, size 0x4, align 4
    float32 m_flYZ; // offset 0x14, size 0x4, align 4
};
