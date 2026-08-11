#pragma once

class CBaseAnimatingActivity : public CBaseModelEntity /*0x0*/  // sizeof 0xA70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    bool m_bShouldAnimateDuringGameplayPause; // offset 0xA54, size 0x1, align 1
    bool m_bInitiallyPopulateInterpHistory; // offset 0xA55, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xA56, size 0x1, align 1
    char _pad_0A57[0x1]; // offset 0xA57
    CUtlVector< CUtlString > m_vecSuppressedAnimEventTags; // offset 0xA58, size 0x18, align 8
};
