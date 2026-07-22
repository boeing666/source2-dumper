#pragma once

class CVoiceContainerAnalysisBase  // sizeof 0x50, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MVDataNodeType MPropertyPolymorphicClass MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    bool m_bRegenerateCurveOnCompile; // offset 0x8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0009[0x7]; // offset 0x9
    CPiecewiseCurve m_curve; // offset 0x10, size 0x40, align 8 | MPropertyFriendlyName
};
