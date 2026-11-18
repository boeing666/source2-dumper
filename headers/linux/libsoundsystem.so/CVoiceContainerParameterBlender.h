#pragma once

class CVoiceContainerParameterBlender : public CVoiceContainerBase /*0x0*/  // sizeof 0x1C8, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x78]; // offset 0x0
    CSoundContainerReference m_firstSound; // offset 0x78, size 0x20, align 8 | MPropertyFriendlyName
    CSoundContainerReference m_secondSound; // offset 0x98, size 0x20, align 8 | MPropertyFriendlyName
    bool m_bEnableOcclusionBlend; // offset 0xB8, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_00B9[0x7]; // offset 0xB9
    CPiecewiseCurve m_curve1; // offset 0xC0, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    CPiecewiseCurve m_curve2; // offset 0x100, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    bool m_bEnableDistanceBlend; // offset 0x140, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_0141[0x7]; // offset 0x141
    CPiecewiseCurve m_curve3; // offset 0x148, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    CPiecewiseCurve m_curve4; // offset 0x188, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
};
