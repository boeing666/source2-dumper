#pragma once

class CNmCurrentSyncEventNode::CDefinition : public CNmFloatValueNode::CDefinition /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nSourceStateNodeIdx; // offset 0xA, size 0x2, align 2
    CNmCurrentSyncEventNode::InfoType_t m_infoType; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
};
