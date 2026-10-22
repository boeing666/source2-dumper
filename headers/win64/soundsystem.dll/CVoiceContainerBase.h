#pragma once

class CVoiceContainerBase  // sizeof 0x78, align 0xFF [vtable abstract] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MVDataRoot MVDataNodeType MPropertyPolymorphicClass MVDataFileExtension MVDataSingleton MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    bool m_bRegisteredVMix; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    CUtlStringToken m_nResourceName; // offset 0x14, size 0x4, align 4
    char _pad_0018[0x18]; // offset 0x18
    CVSound m_vSound; // offset 0x30, size 0x40, align 8 | MPropertySuppressField
    CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer; // offset 0x70, size 0x8, align 8 | MPropertySuppressExpr
};
