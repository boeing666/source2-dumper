#pragma once

struct CBoneConstraintPoseSpaceMorph::Input_t  // sizeof 0x28, align 0xFF (modellib)
{
    Vector m_inputValue; // offset 0x0, size 0xC, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< float32 > m_outputWeightList; // offset 0x10, size 0x18, align 8
};
