#pragma once

struct CBoneConstraintPoseSpaceBone::Input_t  // sizeof 0x28, align 0xFF (modellib)
{
    Vector m_inputValue; // offset 0x0, size 0xC, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CTransform > m_outputTransformList; // offset 0x10, size 0x18, align 8
};
