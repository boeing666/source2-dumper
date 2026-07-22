#pragma once

struct IKSolverSettings_t  // sizeof 0xC, align 0xFF [trivial_dtor] (animgraphlib)
{
    IKSolverType m_SolverType; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    int32 m_nNumIterations; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    EIKEndEffectorRotationFixUpMode m_EndEffectorRotationFixUpMode; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
};
