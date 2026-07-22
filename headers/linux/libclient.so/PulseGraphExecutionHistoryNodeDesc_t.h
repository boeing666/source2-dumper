#pragma once

struct PulseGraphExecutionHistoryNodeDesc_t  // sizeof 0x20, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    CBufferString strCellDesc; // offset 0x0, size 0x10, align 8
    PulseSymbol_t strBindingName; // offset 0x10, size 0x10, align 8
};
