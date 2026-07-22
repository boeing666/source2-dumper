#pragma once

class CNmSyncEventIndexConditionNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nSourceStateNodeIdx; // offset 0x10, size 0x2, align 2
    CNmSyncEventIndexConditionNode::TriggerMode_t m_triggerMode; // offset 0x12, size 0x1, align 1
    char _pad_0013[0x1]; // offset 0x13
    int32 m_syncEventIdx; // offset 0x14, size 0x4, align 4
};
