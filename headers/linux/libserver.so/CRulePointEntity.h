#pragma once

class CRulePointEntity : public CRuleEntity /*0x0*/  // sizeof 0xB40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB38]; // offset 0x0
    int32 m_Score; // offset 0xB38, size 0x4, align 4
    char _pad_0B3C[0x4]; // offset 0xB3C
};
