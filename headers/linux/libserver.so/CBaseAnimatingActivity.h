#pragma once

class CBaseAnimatingActivity : public CBaseModelEntity /*0x0*/  // sizeof 0xBB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    bool m_bShouldAnimateDuringGameplayPause; // offset 0xB9C, size 0x1, align 1
    bool m_bInitiallyPopulateInterpHistory; // offset 0xB9D, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xB9E, size 0x1, align 1
    char _pad_0B9F[0x1]; // offset 0xB9F
    CUtlVector< CUtlString > m_vecSuppressedAnimEventTags; // offset 0xBA0, size 0x18, align 8
};
