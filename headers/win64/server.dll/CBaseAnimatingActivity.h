#pragma once

class CBaseAnimatingActivity : public CBaseModelEntity /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    bool m_bShouldAnimateDuringGameplayPause; // offset 0x8B8, size 0x1, align 1
    bool m_bInitiallyPopulateInterpHistory; // offset 0x8B9, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x8BA, size 0x1, align 1
    char _pad_08BB[0x5]; // offset 0x8BB
    CUtlVector< CUtlString > m_vecSuppressedAnimEventTags; // offset 0x8C0, size 0x18, align 8
};
