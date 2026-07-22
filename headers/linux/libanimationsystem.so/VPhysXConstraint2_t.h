#pragma once

struct VPhysXConstraint2_t  // sizeof 0x100, align 0x4 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
    uint32 m_nFlags; // offset 0x0, size 0x4, align 4
    uint16 m_nParent; // offset 0x4, size 0x2, align 2
    uint16 m_nChild; // offset 0x6, size 0x2, align 2
    VPhysXConstraintParams_t m_params; // offset 0x8, size 0xF8, align 4
};
