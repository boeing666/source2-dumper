#pragma once

class CVoiceContainerShapedNoise : public CVoiceContainerGenerator /*0x0*/  // sizeof 0x148, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    bool m_bUseCurveForFrequency; // offset 0x70, size 0x1, align 1
    char _pad_0071[0x3]; // offset 0x71
    float32 m_flFrequency; // offset 0x74, size 0x4, align 4 | MPropertySuppressExpr
    CPiecewiseCurve m_frequencySweep; // offset 0x78, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    bool m_bUseCurveForResonance; // offset 0xB8, size 0x1, align 1
    char _pad_00B9[0x3]; // offset 0xB9
    float32 m_flResonance; // offset 0xBC, size 0x4, align 4 | MPropertySuppressExpr
    CPiecewiseCurve m_resonanceSweep; // offset 0xC0, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    bool m_bUseCurveForAmplitude; // offset 0x100, size 0x1, align 1
    char _pad_0101[0x3]; // offset 0x101
    float32 m_flGainInDecibels; // offset 0x104, size 0x4, align 4 | MPropertySuppressExpr
    CPiecewiseCurve m_gainSweep; // offset 0x108, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
};
