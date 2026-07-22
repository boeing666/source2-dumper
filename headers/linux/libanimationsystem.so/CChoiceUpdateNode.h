#pragma once

class CChoiceUpdateNode : public CAnimUpdateNodeBase /*0x0*/  // sizeof 0xC0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CUtlVector< CAnimUpdateNodeRef > m_children; // offset 0x60, size 0x18, align 8
    CUtlVector< float32 > m_weights; // offset 0x78, size 0x18, align 8
    CUtlVector< float32 > m_blendTimes; // offset 0x90, size 0x18, align 8
    ChoiceMethod m_choiceMethod; // offset 0xA8, size 0x4, align 4
    ChoiceChangeMethod m_choiceChangeMethod; // offset 0xAC, size 0x4, align 4
    ChoiceBlendMethod m_blendMethod; // offset 0xB0, size 0x4, align 4
    float32 m_blendTime; // offset 0xB4, size 0x4, align 4
    bool m_bCrossFade; // offset 0xB8, size 0x1, align 1
    bool m_bResetChosen; // offset 0xB9, size 0x1, align 1
    bool m_bDontResetSameSelection; // offset 0xBA, size 0x1, align 1
    char _pad_00BB[0x5]; // offset 0xBB
};
