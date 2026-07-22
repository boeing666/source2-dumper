#pragma once

class CRootMotion  // sizeof 0x28, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CMotionTransform m_deltaTransform; // offset 0x0, size 0x10, align 4
    Vector m_vVelocityMS; // offset 0x10, size 0xC, align 4
    Vector m_vUpOverride; // offset 0x1C, size 0xC, align 4
};
