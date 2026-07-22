#pragma once

class CFootStepTriggerUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CUtlVector< FootStepTrigger > m_triggers; // offset 0x70, size 0x18, align 8
    char _pad_0088[0x4]; // offset 0x88
    float32 m_flTolerance; // offset 0x8C, size 0x4, align 4
};
