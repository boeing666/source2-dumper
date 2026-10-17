#pragma once

class CBaseAnimatingActivity : public C_BaseModelEntity /*0x0*/  // sizeof 0xBB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    bool m_bShouldAnimateDuringGameplayPause; // offset 0xB78, size 0x1, align 1
    bool m_bInitiallyPopulateInterpHistory; // offset 0xB79, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xB7A, size 0x1, align 1
    char _pad_0B7B[0x5]; // offset 0xB7B
    CUtlVector< CUtlString > m_vecSuppressedAnimEventTags; // offset 0xB80, size 0x18, align 8
    bool m_bHasAnimatedMaterialAttributes; // offset 0xB98, size 0x1, align 1
    char _pad_0B99[0xF]; // offset 0xB99
    bool m_bSuppressAnimEventSounds; // offset 0xBA8, size 0x1, align 1
    char _pad_0BA9[0x7]; // offset 0xBA9
};
