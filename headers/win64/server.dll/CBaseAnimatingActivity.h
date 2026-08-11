#pragma once

class CBaseAnimatingActivity : public CBaseModelEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bShouldAnimateDuringGameplayPause; // offset 0x778, size 0x1, align 1
    bool m_bInitiallyPopulateInterpHistory; // offset 0x779, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x77A, size 0x1, align 1
    char _pad_077B[0x5]; // offset 0x77B
    CUtlVector< CUtlString > m_vecSuppressedAnimEventTags; // offset 0x780, size 0x18, align 8
};
