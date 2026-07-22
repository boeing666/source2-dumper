#pragma once

class CSoundContainerReference  // sizeof 0x20, align 0x8 (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    CUtlString m_namespace; // offset 0x0, size 0x8, align 8
    bool m_bUseReference; // offset 0x8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0009[0x7]; // offset 0x9
    CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound; // offset 0x10, size 0x8, align 8 | MPropertySuppressExpr MPropertyFriendlyName
    CVoiceContainerBase* m_pSound; // offset 0x18, size 0x8, align 8 | MPropertySuppressExpr MPropertyFriendlyName
};
