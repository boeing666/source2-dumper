#pragma once

class CControlMeterNodeDesc : public CVControlNodeBaseDesc /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (sounddoc_lib)
{
public:
    char _pad_0000[0x88]; // offset 0x0
    bool m_bIsSubgraph; // offset 0x88, size 0x1, align 1
    char _pad_0089[0x7]; // offset 0x89
};
