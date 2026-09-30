#pragma once

class CPulseCell_Outflow_ScriptedSequence : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x198, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    CUtlString m_szSyncGroup; // offset 0xD8, size 0x8, align 8
    int32 m_nExpectedNumSequencesInSyncGroup; // offset 0xE0, size 0x4, align 4
    bool m_bEnsureOnNavmeshOnFinish; // offset 0xE4, size 0x1, align 1
    bool m_bDontTeleportAtEnd; // offset 0xE5, size 0x1, align 1
    bool m_bDisallowInterrupts; // offset 0xE6, size 0x1, align 1
    char _pad_00E7[0x1]; // offset 0xE7
    PulseScriptedSequenceData_t m_scriptedSequenceDataMain; // offset 0xE8, size 0x38, align 8
    CUtlVector< PulseScriptedSequenceData_t > m_vecAdditionalActors; // offset 0x120, size 0x18, align 8
    CPulse_ResumePoint m_OnFinished; // offset 0x138, size 0x48, align 255
    CUtlVector< CPulse_OutflowConnection > m_Triggers; // offset 0x180, size 0x18, align 8
};
