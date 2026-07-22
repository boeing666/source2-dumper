#pragma once

class CMotionGraphUpdateNode : public CLeafUpdateNode /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CSmartPtr< CMotionGraph > m_pMotionGraph; // offset 0x58, size 0x8, align 8
    char _pad_0060[0x8]; // offset 0x60
};
