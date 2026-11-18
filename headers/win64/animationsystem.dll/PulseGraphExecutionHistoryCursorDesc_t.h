#pragma once

struct PulseGraphExecutionHistoryCursorDesc_t  // sizeof 0x50, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    PulseCursorID_t nCursorID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< PulseCursorID_t > vecAncestorCursorIDs; // offset 0x8, size 0x18, align 8
    PulseDocNodeID_t nSpawnNodeID; // offset 0x20, size 0x4, align 255
    PulseDocNodeID_t nRetiredAtNodeID; // offset 0x24, size 0x4, align 255
    PulseExecHistoryCallerInfo_t externalCallerInfo; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CUtlVector< PulseGraphExecutionHistoryEntry_t* > m_vecHistory; // offset 0x30, size 0x18, align 8
    float32 flLastReferenced; // offset 0x48, size 0x4, align 4
    bool bWasAnObservableComputation; // offset 0x4C, size 0x1, align 1
    bool bOverflowedInstructionHistoryLimit; // offset 0x4D, size 0x1, align 1
    char _pad_004E[0x2]; // offset 0x4E
};
