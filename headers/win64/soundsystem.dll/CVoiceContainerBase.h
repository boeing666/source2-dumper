#pragma once

class CVoiceContainerBase  // sizeof 0x70, align 0xFF [vtable abstract] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MVDataRoot MVDataNodeType MPropertyPolymorphicClass MVDataFileExtension MVDataSingleton MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CVSound m_vSound; // offset 0x28, size 0x40, align 8 | MPropertySuppressField
    CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer; // offset 0x68, size 0x8, align 8 | MPropertySuppressExpr
};
