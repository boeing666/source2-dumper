#pragma once

struct PulseGraphExecutionHistoryEntry_t  // sizeof 0x20, align 0x8 [trivial_dtor] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    PulseCursorID_t nCursorID; // offset 0x0, size 0x4, align 255
    PulseDocNodeID_t nEditorID; // offset 0x4, size 0x4, align 255
    float32 flExecTime; // offset 0x8, size 0x4, align 4
    uint32 unFlags; // offset 0xC, size 0x4, align 4
    PulseSymbol_t tagName; // offset 0x10, size 0x10, align 8
};
