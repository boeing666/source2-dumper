#pragma once

class CBaseAnimatingActivity : public C_BaseModelEntity /*0x0*/  // sizeof 0xDA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    bool m_bShouldAnimateDuringGameplayPause; // offset 0xD68, size 0x1, align 1
    bool m_bInitiallyPopulateInterpHistory; // offset 0xD69, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xD6A, size 0x1, align 1
    char _pad_0D6B[0x5]; // offset 0xD6B
    CUtlVector< CUtlString > m_vecSuppressedAnimEventTags; // offset 0xD70, size 0x18, align 8
    bool m_bHasAnimatedMaterialAttributes; // offset 0xD88, size 0x1, align 1
    char _pad_0D89[0xF]; // offset 0xD89
    bool m_bSuppressAnimEventSounds; // offset 0xD98, size 0x1, align 1
    char _pad_0D99[0x7]; // offset 0xD99
};
