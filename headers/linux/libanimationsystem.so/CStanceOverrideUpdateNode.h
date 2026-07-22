#pragma once

class CStanceOverrideUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CUtlVector< StanceInfo_t > m_footStanceInfo; // offset 0x70, size 0x18, align 8
    CAnimUpdateNodeRef m_pStanceSourceNode; // offset 0x88, size 0x10, align 8
    CAnimParamHandle m_hParameter; // offset 0x98, size 0x2, align 1
    char _pad_009A[0x2]; // offset 0x9A
    StanceOverrideMode m_eMode; // offset 0x9C, size 0x4, align 4
};
