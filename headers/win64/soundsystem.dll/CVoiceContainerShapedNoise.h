#pragma once

class CVoiceContainerShapedNoise : public CVoiceContainerGenerator /*0x0*/  // sizeof 0x180, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    bool m_bUseCurveForFrequency; // offset 0xA8, size 0x1, align 1
    char _pad_00A9[0x3]; // offset 0xA9
    float32 m_flFrequency; // offset 0xAC, size 0x4, align 4 | MPropertySuppressExpr
    CPiecewiseCurve m_frequencySweep; // offset 0xB0, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    bool m_bUseCurveForResonance; // offset 0xF0, size 0x1, align 1
    char _pad_00F1[0x3]; // offset 0xF1
    float32 m_flResonance; // offset 0xF4, size 0x4, align 4 | MPropertySuppressExpr
    CPiecewiseCurve m_resonanceSweep; // offset 0xF8, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    bool m_bUseCurveForAmplitude; // offset 0x138, size 0x1, align 1
    char _pad_0139[0x3]; // offset 0x139
    float32 m_flGainInDecibels; // offset 0x13C, size 0x4, align 4 | MPropertySuppressExpr
    CPiecewiseCurve m_gainSweep; // offset 0x140, size 0x40, align 8 | MPropertySuppressExpr MPropertyFriendlyName
};
