#pragma once

class CVoiceContainerBase  // sizeof 0x78, align 0xFF [vtable abstract] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MVDataRoot MVDataNodeType MPropertyPolymorphicClass MVDataFileExtension MVDataSingleton MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlStringToken m_nResourceName; // offset 0x10, size 0x4, align 4
    bool m_bRegisteredVMix; // offset 0x14, size 0x1, align 1
    bool m_bIsValidForPlayback; // offset 0x15, size 0x1, align 1
    char _pad_0016[0x1A]; // offset 0x16
    CVSound m_vSound; // offset 0x30, size 0x40, align 8 | MPropertySuppressField
    CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer; // offset 0x70, size 0x8, align 8 | MPropertySuppressExpr
};
