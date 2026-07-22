#pragma once

class FootStepTrigger  // sizeof 0x20, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< int32 > m_tags; // offset 0x0, size 0x18, align 8
    int32 m_nFootIndex; // offset 0x18, size 0x4, align 4
    StepPhase m_triggerPhase; // offset 0x1C, size 0x4, align 4
};
