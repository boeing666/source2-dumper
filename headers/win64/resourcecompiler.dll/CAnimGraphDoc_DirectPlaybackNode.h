#pragma once

class CAnimGraphDoc_DirectPlaybackNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    bool m_bFinishEarly; // offset 0x48, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bResetOnFinish; // offset 0x49, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_004A[0x6]; // offset 0x4A
};
