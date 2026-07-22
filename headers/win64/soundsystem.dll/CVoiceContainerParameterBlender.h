#pragma once

class CVoiceContainerParameterBlender : public CVoiceContainerBase /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    CSoundContainerReference m_firstSound; // offset 0xA8, size 0x20, align 8 | MPropertyFriendlyName
    CSoundContainerReference m_secondSound; // offset 0xC8, size 0x20, align 8 | MPropertyFriendlyName
    bool m_bEnableOcclusionBlend; // offset 0xE8, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_00E9[0x7]; // offset 0xE9
    CPiecewiseCurve m_curve1; // offset 0xF0, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    CPiecewiseCurve m_curve2; // offset 0x130, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    bool m_bEnableDistanceBlend; // offset 0x170, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_0171[0x7]; // offset 0x171
    CPiecewiseCurve m_curve3; // offset 0x178, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    CPiecewiseCurve m_curve4; // offset 0x1B8, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
};
