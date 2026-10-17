#pragma once

class CBaseAnimatingActivity : public CBaseModelEntity /*0x0*/  // sizeof 0xB50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB34]; // offset 0x0
    bool m_bShouldAnimateDuringGameplayPause; // offset 0xB34, size 0x1, align 1
    bool m_bInitiallyPopulateInterpHistory; // offset 0xB35, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xB36, size 0x1, align 1
    char _pad_0B37[0x1]; // offset 0xB37
    CUtlVector< CUtlString > m_vecSuppressedAnimEventTags; // offset 0xB38, size 0x18, align 8
};
