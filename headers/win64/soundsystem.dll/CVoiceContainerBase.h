#pragma once

class CVoiceContainerBase  // sizeof 0xA8, align 0xFF [vtable abstract] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MVDataRoot MVDataNodeType MPropertyPolymorphicClass MVDataFileExtension MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CVSound m_vSound; // offset 0x28, size 0x78, align 8 | MPropertySuppressField
    CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer; // offset 0xA0, size 0x8, align 8 | MPropertySuppressExpr
};
