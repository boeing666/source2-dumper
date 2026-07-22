#pragma once

class CBaseAnimatingActivity : public C_BaseModelEntity /*0x0*/  // sizeof 0xC48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    bool m_bShouldAnimateDuringGameplayPause; // offset 0xC10, size 0x1, align 1
    bool m_bInitiallyPopulateInterpHistory; // offset 0xC11, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xC12, size 0x1, align 1
    char _pad_0C13[0x5]; // offset 0xC13
    CUtlVector< CUtlString > m_vecSuppressedAnimEventTags; // offset 0xC18, size 0x18, align 8
    bool m_bHasAnimatedMaterialAttributes; // offset 0xC30, size 0x1, align 1
    char _pad_0C31[0xF]; // offset 0xC31
    bool m_bSuppressAnimEventSounds; // offset 0xC40, size 0x1, align 1
    char _pad_0C41[0x7]; // offset 0xC41
};
