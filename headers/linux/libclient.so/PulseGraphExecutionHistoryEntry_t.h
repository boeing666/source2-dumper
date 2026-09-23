#pragma once

struct PulseGraphExecutionHistoryEntry_t  // sizeof 0x38, align 0x8 [trivial_dtor] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    PulseCursorID_t nCursorID; // offset 0x0, size 0x4, align 255
    PulseDocNodeID_t nEditorID; // offset 0x4, size 0x4, align 255
    PulseSymbol_t seqPoint; // offset 0x8, size 0x10, align 8
    float32 flExecTime; // offset 0x18, size 0x4, align 4
    uint32 unFlags; // offset 0x1C, size 0x4, align 4
    PulseSymbol_t tagName; // offset 0x20, size 0x10, align 8
    PulseCursorID_t childID; // offset 0x30, size 0x4, align 255
    char _pad_0034[0x4]; // offset 0x34
};
