#pragma once

class CAnimGraphDoc_AddNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_baseInput; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    CAnimGraphDoc_NodeConnection m_additiveInput; // offset 0x48, size 0x8, align 4 | MPropertySuppressField
    BinaryNodeTiming m_timingBehavior; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    float32 m_flTimingBlend; // offset 0x54, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertyAttrStateCallback
    BinaryNodeChildOption m_footMotionTiming; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bApplyToFootMotion; // offset 0x5C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bResetBase; // offset 0x5D, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bResetAdditive; // offset 0x5E, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bApplyChannelsSeparately; // offset 0x5F, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseModelSpace; // offset 0x60, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bApplyScale; // offset 0x61, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_0062[0x6]; // offset 0x62
};
