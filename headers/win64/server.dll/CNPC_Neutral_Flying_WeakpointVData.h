#pragma once

class CNPC_Neutral_Flying_WeakpointVData : public CNPC_Neutral_WeakpointVData /*0x0*/  // sizeof 0x230, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x218]; // offset 0x0
    float32 m_flFrequencyY; // offset 0x218, size 0x4, align 4
    float32 m_flMinY; // offset 0x21C, size 0x4, align 4
    float32 m_flMaxY; // offset 0x220, size 0x4, align 4
    float32 m_flFrequencyR; // offset 0x224, size 0x4, align 4
    float32 m_flOrbitRadius; // offset 0x228, size 0x4, align 4
    float32 m_flOffSetScaler; // offset 0x22C, size 0x4, align 4
};
