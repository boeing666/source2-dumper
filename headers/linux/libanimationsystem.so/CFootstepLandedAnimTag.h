#pragma once

class CFootstepLandedAnimTag : public CAnimTagBase /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    FootstepLandedFootSoundType_t m_FootstepType; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_005C[0x4]; // offset 0x5C
    CUtlString m_OverrideSoundName; // offset 0x60, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlString m_DebugAnimSourceString; // offset 0x68, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_BoneName; // offset 0x70, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    FootstepJumpPhase_t m_footstepJumpPhase; // offset 0x78, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0079[0x7]; // offset 0x79
};
