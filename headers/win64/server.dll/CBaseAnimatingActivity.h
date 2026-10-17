#pragma once

class CBaseAnimatingActivity : public CBaseModelEntity /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    bool m_bShouldAnimateDuringGameplayPause; // offset 0x858, size 0x1, align 1
    bool m_bInitiallyPopulateInterpHistory; // offset 0x859, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x85A, size 0x1, align 1
    char _pad_085B[0x5]; // offset 0x85B
    CUtlVector< CUtlString > m_vecSuppressedAnimEventTags; // offset 0x860, size 0x18, align 8
};
