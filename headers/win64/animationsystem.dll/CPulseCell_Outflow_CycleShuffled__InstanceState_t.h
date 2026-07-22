#pragma once

struct CPulseCell_Outflow_CycleShuffled::InstanceState_t  // sizeof 0x28, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    CUtlVectorFixedGrowable< uint8, 8 > m_Shuffle; // offset 0x0, size 0x20, align 8
    int32 m_nNextShuffle; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
};
