#pragma once

class CAnimGraphDoc_MotionParameterManager  // sizeof 0x28, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_MotionParameter > > m_params; // offset 0x10, size 0x18, align 8
};
