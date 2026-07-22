#pragma once

class CAnimGraphDoc_ChoiceNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CUtlVector< CChoiceNodeChild > m_children; // offset 0x40, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
    int32 m_seed; // offset 0x58, size 0x4, align 4 | MPropertySuppressField
    ChoiceMethod m_choiceMethod; // offset 0x5C, size 0x4, align 4 | MPropertyFriendlyName
    ChoiceChangeMethod m_choiceChangeMethod; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName
    ChoiceBlendMethod m_blendMethod; // offset 0x64, size 0x4, align 4 | MPropertyGroupName MPropertyFriendlyName MPropertyAutoRebuildOnChange
    float32 m_blendTime; // offset 0x68, size 0x4, align 4 | MPropertyGroupName MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bCrossFade; // offset 0x6C, size 0x1, align 1 | MPropertyGroupName MPropertyFriendlyName
    bool m_bResetChosen; // offset 0x6D, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    bool m_bDontResetSameSelection; // offset 0x6E, size 0x1, align 1 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_006F[0x1]; // offset 0x6F
};
