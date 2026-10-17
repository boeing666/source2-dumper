#pragma once

class CBaseAnimatingActivity : public C_BaseModelEntity /*0x0*/  // sizeof 0xD38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    bool m_bShouldAnimateDuringGameplayPause; // offset 0xD00, size 0x1, align 1
    bool m_bInitiallyPopulateInterpHistory; // offset 0xD01, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xD02, size 0x1, align 1
    char _pad_0D03[0x5]; // offset 0xD03
    CUtlVector< CUtlString > m_vecSuppressedAnimEventTags; // offset 0xD08, size 0x18, align 8
    bool m_bHasAnimatedMaterialAttributes; // offset 0xD20, size 0x1, align 1
    char _pad_0D21[0xF]; // offset 0xD21
    bool m_bSuppressAnimEventSounds; // offset 0xD30, size 0x1, align 1
    char _pad_0D31[0x7]; // offset 0xD31
};
