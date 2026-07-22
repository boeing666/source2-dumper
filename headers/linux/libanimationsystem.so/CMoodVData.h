#pragma once

class CMoodVData  // sizeof 0x100, align 0x8 (animationsystem) {MGetKV3ClassDefaults MVDataRoot MVDataOverlayType}
{
public:
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // offset 0x0, size 0xE0, align 8 | MPropertyDescription MPropertyProvidesEditContextString
    MoodType_t m_nMoodType; // offset 0xE0, size 0x4, align 4 | MPropertyDescription
    char _pad_00E4[0x4]; // offset 0xE4
    CUtlVector< MoodAnimationLayer_t > m_animationLayers; // offset 0xE8, size 0x18, align 8 | MPropertyDescription
};
