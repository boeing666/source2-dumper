#pragma once

class CVoiceContainerShapedNoise : public CVoiceContainerGenerator /*0x0*/  // sizeof 0x150, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x78]; // offset 0x0
    bool m_bUseCurveForFrequency; // offset 0x78, size 0x1, align 1
    char _pad_0079[0x3]; // offset 0x79
    float32 m_flFrequency; // offset 0x7C, size 0x4, align 4 | MPropertySuppressExpr
    CPiecewiseCurve m_frequencySweep; // offset 0x80, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    bool m_bUseCurveForResonance; // offset 0xC0, size 0x1, align 1
    char _pad_00C1[0x3]; // offset 0xC1
    float32 m_flResonance; // offset 0xC4, size 0x4, align 4 | MPropertySuppressExpr
    CPiecewiseCurve m_resonanceSweep; // offset 0xC8, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    bool m_bUseCurveForAmplitude; // offset 0x108, size 0x1, align 1
    char _pad_0109[0x3]; // offset 0x109
    float32 m_flGainInDecibels; // offset 0x10C, size 0x4, align 4 | MPropertySuppressExpr
    CPiecewiseCurve m_gainSweep; // offset 0x110, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
};
