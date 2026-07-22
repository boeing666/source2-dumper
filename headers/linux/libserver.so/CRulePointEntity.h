#pragma once

class CRulePointEntity : public CRuleEntity /*0x0*/  // sizeof 0xA60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    int32 m_Score; // offset 0xA58, size 0x4, align 4
    char _pad_0A5C[0x4]; // offset 0xA5C
};
