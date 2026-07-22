#pragma once

class CStateUpdateData  // sizeof 0x48, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    uint8_t m_bIsStartState : 1; // offset 0x0
    uint8_t m_bIsEndState : 1; // offset 0x0
    uint8_t m_bIsPassthrough : 1; // offset 0x0
    uint8_t m_bIsPassthroughRootMotion : 1; // offset 0x0
    uint8_t m_bPreEvaluatePassthroughTransitionPath : 1; // offset 0x0
    AnimScriptHandle m_hScript; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< int32 > m_transitionIndices; // offset 0x10, size 0x18, align 8
    CUtlVector< CStateActionUpdater > m_actions; // offset 0x28, size 0x18, align 8
    AnimStateID m_stateID; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
};
