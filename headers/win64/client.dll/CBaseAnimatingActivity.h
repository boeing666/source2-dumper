#pragma once

class CBaseAnimatingActivity : public C_BaseModelEntity /*0x0*/  // sizeof 0xC10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    bool m_bShouldAnimateDuringGameplayPause; // offset 0xBD8, size 0x1, align 1
    bool m_bInitiallyPopulateInterpHistory; // offset 0xBD9, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xBDA, size 0x1, align 1
    char _pad_0BDB[0x5]; // offset 0xBDB
    CUtlVector< CUtlString > m_vecSuppressedAnimEventTags; // offset 0xBE0, size 0x18, align 8
    bool m_bHasAnimatedMaterialAttributes; // offset 0xBF8, size 0x1, align 1
    char _pad_0BF9[0xF]; // offset 0xBF9
    bool m_bSuppressAnimEventSounds; // offset 0xC08, size 0x1, align 1
    char _pad_0C09[0x7]; // offset 0xC09
};
