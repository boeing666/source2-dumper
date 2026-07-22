#pragma once

class CUnaryUpdateNode : public CAnimUpdateNodeBase /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CAnimUpdateNodeRef m_pChildNode; // offset 0x60, size 0x10, align 8
};
