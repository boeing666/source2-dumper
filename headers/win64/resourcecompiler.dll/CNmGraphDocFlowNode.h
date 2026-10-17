#pragma once

class CNmGraphDocFlowNode : public CNmGraphDocNode /*0x0*/  // sizeof 0x108, align 0xFF [vtable abstract] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CUtlLeanVectorFixedGrowable< NmGraphDocPin_t, 4 > m_inputPins; // offset 0x58, size 0x88, align 8
    CUtlLeanVectorFixedGrowable< NmGraphDocPin_t, 1 > m_outputPins; // offset 0xE0, size 0x28, align 8
};
