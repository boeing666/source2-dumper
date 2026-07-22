#pragma once

class CBaseAnimatingActivity : public C_BaseModelEntity /*0x0*/  // sizeof 0xAC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    bool m_bShouldAnimateDuringGameplayPause; // offset 0xA88, size 0x1, align 1
    bool m_bInitiallyPopulateInterpHistory; // offset 0xA89, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xA8A, size 0x1, align 1
    char _pad_0A8B[0x5]; // offset 0xA8B
    CUtlVector< CUtlString > m_vecSuppressedAnimEventTags; // offset 0xA90, size 0x18, align 8
    bool m_bHasAnimatedMaterialAttributes; // offset 0xAA8, size 0x1, align 1
    char _pad_0AA9[0xF]; // offset 0xAA9
    bool m_bSuppressAnimEventSounds; // offset 0xAB8, size 0x1, align 1
    char _pad_0AB9[0x7]; // offset 0xAB9
};
