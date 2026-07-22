#pragma once

class CPulseCell_Outflow_ScriptedSequence : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x150, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlString m_szSyncGroup; // offset 0x48, size 0x8, align 8
    int32 m_nExpectedNumSequencesInSyncGroup; // offset 0x50, size 0x4, align 4
    bool m_bEnsureOnNavmeshOnFinish; // offset 0x54, size 0x1, align 1
    bool m_bDontTeleportAtEnd; // offset 0x55, size 0x1, align 1
    bool m_bDisallowInterrupts; // offset 0x56, size 0x1, align 1
    char _pad_0057[0x1]; // offset 0x57
    PulseScriptedSequenceData_t m_scriptedSequenceDataMain; // offset 0x58, size 0x38, align 8
    CUtlVector< PulseScriptedSequenceData_t > m_vecAdditionalActors; // offset 0x90, size 0x18, align 8
    CPulse_ResumePoint m_OnFinished; // offset 0xA8, size 0x48, align 255
    CPulse_ResumePoint m_OnCanceled; // offset 0xF0, size 0x48, align 255
    CUtlVector< CPulse_OutflowConnection > m_Triggers; // offset 0x138, size 0x18, align 8
};
