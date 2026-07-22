#pragma once

class CPulse_BlackboardReference  // sizeof 0x28, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    CStrongHandle< InfoForResourceTypeIPulseGraphDef > m_hBlackboardResource; // offset 0x0, size 0x8, align 8
    PulseSymbol_t m_BlackboardResource; // offset 0x8, size 0x10, align 8
    PulseDocNodeID_t m_nNodeID; // offset 0x18, size 0x4, align 255
    char _pad_001C[0x4]; // offset 0x1C
    CGlobalSymbol m_NodeName; // offset 0x20, size 0x8, align 8
};
