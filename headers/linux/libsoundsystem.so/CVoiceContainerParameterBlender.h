#pragma once

class CVoiceContainerParameterBlender : public CVoiceContainerBase /*0x0*/  // sizeof 0x1C0, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CSoundContainerReference m_firstSound; // offset 0x70, size 0x20, align 8 | MPropertyFriendlyName
    CSoundContainerReference m_secondSound; // offset 0x90, size 0x20, align 8 | MPropertyFriendlyName
    bool m_bEnableOcclusionBlend; // offset 0xB0, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_00B1[0x7]; // offset 0xB1
    CPiecewiseCurve m_curve1; // offset 0xB8, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    CPiecewiseCurve m_curve2; // offset 0xF8, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    bool m_bEnableDistanceBlend; // offset 0x138, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_0139[0x7]; // offset 0x139
    CPiecewiseCurve m_curve3; // offset 0x140, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    CPiecewiseCurve m_curve4; // offset 0x180, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
};
