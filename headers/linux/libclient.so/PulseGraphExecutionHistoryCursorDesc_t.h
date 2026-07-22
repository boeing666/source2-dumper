#pragma once

struct PulseGraphExecutionHistoryCursorDesc_t  // sizeof 0x30, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    CUtlVector< PulseCursorID_t > vecAncestorCursorIDs; // offset 0x0, size 0x18, align 8
    PulseDocNodeID_t nSpawnNodeID; // offset 0x18, size 0x4, align 255
    PulseDocNodeID_t nRetiredAtNodeID; // offset 0x1C, size 0x4, align 255
    float32 flLastReferenced; // offset 0x20, size 0x4, align 4
    int32 nLastValidEntryIdx; // offset 0x24, size 0x4, align 4
    bool bWasAnObservableComputation; // offset 0x28, size 0x1, align 1
    char _pad_0029[0x7]; // offset 0x29
};
