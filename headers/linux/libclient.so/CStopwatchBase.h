#pragma once

class CStopwatchBase : public CSimpleSimTimer /*0x0*/  // sizeof 0xC, align 0xFF [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    bool m_bIsRunning; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
};
