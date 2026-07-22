#pragma once

class CStateMachineInstanceData  // sizeof 0x1C, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    float32 m_flTimeInState; // offset 0x0, size 0x4, align 4
    CAnimNetVar< int32 > m_currentTransitionIndex; // offset 0x4, size 0xC, align 4
    int32 m_prevStateIndex; // offset 0x10, size 0x4, align 4
    int32 m_scheduledTransitionIndex; // offset 0x14, size 0x4, align 4
    char _pad_0018[0x4]; // offset 0x18
};
