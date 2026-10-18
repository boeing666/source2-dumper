#pragma once

class CAnimGraphDoc_NodeStateTransition : public CAnimGraphDoc_StateTransition /*0x0*/  // sizeof 0xC0, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CFloatAnimValue m_blendDuration; // offset 0x70, size 0x20, align 8 | MPropertyFriendlyName
    bool m_bReset; // offset 0x90, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0091[0x3]; // offset 0x91
    ResetCycleOption m_resetCycleOption; // offset 0x94, size 0x4, align 4 | MPropertyFriendlyName
    CFloatAnimValue m_flFixedCycleValue; // offset 0x98, size 0x20, align 8 | MPropertyFriendlyName
    CBlendCurve m_blendCurve; // offset 0xB8, size 0x8, align 4 | MPropertySuppressField
};
