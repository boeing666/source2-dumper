#pragma once

class FourCovMatrices3  // sizeof 0x60, align 0x10 [trivial_ctor trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
public:
    FourVectors m_vDiag; // offset 0x0, size 0x30, align 16
    fltx4 m_flXY; // offset 0x30, size 0x10, align 16
    fltx4 m_flXZ; // offset 0x40, size 0x10, align 16
    fltx4 m_flYZ; // offset 0x50, size 0x10, align 16
};
