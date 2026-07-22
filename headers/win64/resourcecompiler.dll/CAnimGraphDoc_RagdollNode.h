#pragma once

class CAnimGraphDoc_RagdollNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CUtlString m_weightListName; // offset 0x40, size 0x8, align 8
    RagdollPoseControl m_poseControlMethod; // offset 0x48, size 0x4, align 4
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x4C, size 0x8, align 4 | MPropertySuppressField
    char _pad_0054[0x4]; // offset 0x54
};
